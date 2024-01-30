@class NSSet, NSString, HMDHome, NSObject, HMBCloudZone;
@protocol OS_dispatch_queue, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareParticipantsManagerDataSource;

@interface HMDCloudShareParticipantsManager : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMBCloudZone *cloudZone;
@property (weak) HMDHome *home;
@property (weak) id<HMDCloudShareParticipantsManagerDataSource> dataSource;
@property (weak) id<HMDCloudShareParticipantsManagerDelegate> delegate;
@property (readonly) NSSet *participatingUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)clearParticipants;
- (void)handleHomeUserRemovedNotification:(id)a0;
- (void)updateShareParticipants;
- (BOOL)isAcceptedUser:(id)a0 error:(id *)a1;
- (id)initWithQueue:(id)a0 cloudZone:(id)a1 home:(id)a2;
- (id)fetchInvitationToUser:(id)a0 shouldGrantWriteAccess:(BOOL)a1;
- (id)fetchInvitationContextForUser:(id)a0 shouldGrantWriteAccess:(BOOL)a1;
- (id)_untrustedInvitationContextForUser:(id)a0 shouldGrantWriteAccess:(BOOL)a1;
- (void)handleHomeUserAddedNotification:(id)a0;

@end
