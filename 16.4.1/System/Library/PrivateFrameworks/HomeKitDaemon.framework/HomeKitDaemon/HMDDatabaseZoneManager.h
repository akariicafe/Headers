@class NSUUID, NSString, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, HMDDatabaseZoneManagerConfiguration, HMBCloudZone, NSObject, HMBLocalZone, HMDHome;
@protocol OS_dispatch_queue, HMDDatabase, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMBCloudZoneDelegate, HMBLocalZoneDelegate;

@interface HMDDatabaseZoneManager : HMFObject <HMFLogging, HMDDatabaseDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDelegate>

@property long long state;
@property (readonly) id<HMDDatabase> database;
@property (readonly) HMDCloudShareMessenger *shareMessenger;
@property (weak) id<HMBLocalZoneDelegate, HMBCloudZoneDelegate> zoneDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMDCloudShareParticipantsManager *participantsManager;
@property (retain) HMBLocalZone *localZone;
@property (retain) HMBCloudZone *cloudZone;
@property (copy) id /* block */ participantsManagerFactory;
@property (weak) id<HMDDatabaseZoneManagerDataSource> dataSource;
@property (weak) id<HMDDatabaseZoneManagerDelegate> delegate;
@property (readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *zoneName;
@property (readonly, weak) HMDHome *home;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (copy) HMDDatabaseZoneManagerConfiguration *defaultConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)remove;
- (id)logIdentifier;
- (BOOL)start;
- (void).cxx_destruct;
- (BOOL)_fetchExistingPrivateZonesWithConfiguration:(id)a0;
- (BOOL)_fetchPrivateZonesWithConfiguration:(id)a0;
- (BOOL)_fetchSharedZonesWithConfiguration:(id)a0;
- (BOOL)_handleFetchZonesResult:(id)a0 configuration:(id)a1;
- (void)_requestShareInvitationWithConfiguration:(id)a0;
- (void)_sendShareInvitation:(id)a0 toUser:(id)a1 device:(id)a2;
- (void)_tearDownState;
- (void)database:(id)a0 didCreateZoneWithName:(id)a1 isPrivate:(BOOL)a2;
- (void)database:(id)a0 didReceiveMessageWithUserInfo:(id)a1;
- (void)database:(id)a0 didRemoveZoneWithName:(id)a1 isPrivate:(BOOL)a2;
- (id)initWithDatabase:(id)a0 zoneName:(id)a1 home:(id)a2 messageTargetUUID:(id)a3 zoneDelegate:(id)a4 workQueue:(id)a5;
- (id)initWithDatabase:(id)a0 zoneName:(id)a1 home:(id)a2 shareMessenger:(id)a3 zoneDelegate:(id)a4 workQueue:(id)a5;
- (void)manager:(id)a0 didRequestSendForInvitation:(id)a1 toDevice:(id)a2;
- (void)manager:(id)a0 didRequestSendForInvitation:(id)a1 toUser:(id)a2;
- (void)messenger:(id)a0 didReceiveInvitationData:(id)a1 completion:(id /* block */)a2;
- (void)messenger:(id)a0 didReceiveInvitationRequestFromUser:(id)a1 device:(id)a2;
- (BOOL)startWithConfiguration:(id)a0;
- (void)updateShareParticipants;

@end
