@class HMDCloudShareParticipantsManager, NSString, HMBCloudZone, HMBLocalZone, NSUUID, NSObject, HMDCloudShareMessenger;
@protocol HMDDatabase, HMDAssistantAccessControlModelUpdateReceiver, HMDUserSettingsBackingStoreControllerDelegate, HMDUserListeningHistoryUpdateControlModelUpdateReceiver, HMDSettingTransactionReceiverProtocol, OS_dispatch_queue, HMDSharedUserDataModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, OS_os_log, HMMLogEventSubmitting;

@interface HMDUserSettingsBackingStoreController : NSObject <HMBLocalZoneModelObserver, HMFLogging, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareMessengerDelegate, HMDDatabaseDelegate, HMDSettingsBackingStoreController> {
    NSObject<OS_os_log> *_logger;
    unsigned long long _startupSignPost;
}

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *zoneName;
@property (readonly) id<HMDDatabase> database;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) HMDCloudShareMessenger *shareMessenger;
@property (retain) HMDCloudShareParticipantsManager *participantsManager;
@property (retain) HMBCloudZone *cloudZone;
@property (retain) HMBLocalZone *localZone;
@property long long runState;
@property long long logEventRunState;
@property (weak) id<HMDSettingTransactionReceiverProtocol> transactionReceiver;
@property (weak) id<HMDAssistantAccessControlModelUpdateReceiver> assistantAccessControlModelUpdateReceiver;
@property (copy) NSUUID *assistantAccessControlModelID;
@property (weak) id<HMDMediaContentProfileAccessControlModelUpdateReceiver> mediaContentProfileAccessControlModelUpdateReceiver;
@property (copy) NSUUID *mediaContentProfileAccessControlModelID;
@property (copy) NSUUID *userListeningHistoryUpdateModelID;
@property (weak) id<HMDUserListeningHistoryUpdateControlModelUpdateReceiver> userListeningHistoryUpdateControlModelUpdateReceiver;
@property (copy) NSUUID *sharedUserDataModelUpdateModelID;
@property (weak) id<HMDSharedUserDataModelUpdateReceiver> sharedUserDataModelUpdateReceiver;
@property (readonly, weak) id<HMDUserSettingsBackingStoreControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)clearParticipants;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (void)start;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)updateParticipants;
- (void)_didFetchZonesWithResult:(id)a0 isOwnedZone:(BOOL)a1 error:(id)a2;
- (void)_localZone:(id)a0 updatedModel:(id)a1 previousModel:(id)a2 options:(id)a3 result:(id)a4;
- (void)_sendShareInvitation:(id)a0 toUser:(id)a1 device:(id)a2;
- (void)_startWithOwnedZone;
- (void)_startWithSharedZone;
- (void)_updateLogEventRunState:(long long)a0;
- (void)_updateRunState:(long long)a0;
- (void)database:(id)a0 didCreateZoneWithName:(id)a1 isPrivate:(BOOL)a2;
- (void)database:(id)a0 didRemoveZoneWithName:(id)a1 isPrivate:(BOOL)a2;
- (void)deregisterObserverDeviceIdentifier:(id)a0;
- (void)deregisterObserverDeviceIdentifier:(id)a0 observerPushToken:(id)a1 subActivity:(id)a2 subjectDeviceIdentifier:(id)a3;
- (void)destroyZone;
- (id)initWithDelegate:(id)a0 queue:(id)a1 zoneName:(id)a2 database:(id)a3 shareMessenger:(id)a4;
- (id)loadAssistantAccessControlModelWithModelID:(id)a0 error:(id *)a1;
- (id)loadMediaContentAccessControlModelWithModelID:(id)a0 error:(id *)a1;
- (id)loadPrivateUserDataModelWithError:(id *)a0;
- (id)loadSharedUserDataModelWithError:(id *)a0;
- (id)loadUserListeningHistoryUpdateControlModelWithModelID:(id)a0 error:(id *)a1;
- (id)loadUserSettings;
- (void)manager:(id)a0 didRequestSendForInvitation:(id)a1 toDevice:(id)a2;
- (void)manager:(id)a0 didRequestSendForInvitation:(id)a1 toUser:(id)a2;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (void)messenger:(id)a0 didReceiveInvitationData:(id)a1 completion:(id /* block */)a2;
- (void)messenger:(id)a0 didReceiveInvitationRequestFromUser:(id)a1 device:(id)a2;
- (id)queryPushTokensForDevicesObservingSubjectDevice:(id)a0 subActivity:(id)a1;
- (void)registerForAssistantAccessControlModelUpdates:(id)a0 modelID:(id)a1;
- (void)registerForMediaContentAccessControlModelUpdates:(id)a0 modelID:(id)a1;
- (void)registerForSettingsTransactions:(id)a0;
- (void)registerForSharedUserDataModelUpdates:(id)a0 modelID:(id)a1;
- (void)registerForUserListeningHistoryUpdateControlModelUpdates:(id)a0 modelID:(id)a1;
- (void)registerObserverDeviceIdentifier:(id)a0 observerPushToken:(id)a1 subActivity:(id)a2 subjectDeviceIdentifier:(id)a3;
- (void)runSettingTransaction:(id)a0 completion:(id /* block */)a1;
- (void)runSettingTransaction:(id)a0 waitForCloudPush:(BOOL)a1 completion:(id /* block */)a2;
- (void)runTransaction:(id)a0 waitForCloudPush:(BOOL)a1 completion:(id /* block */)a2;
- (id)settingTransactionWithName:(id)a0;
- (void)updateObserverDeviceIdentifier:(id)a0 observerPushToken:(id)a1;

@end
