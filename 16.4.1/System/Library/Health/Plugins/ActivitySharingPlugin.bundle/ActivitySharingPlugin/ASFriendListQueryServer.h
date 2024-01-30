@class ASActivitySharingManager, NSString;

@interface ASFriendListQueryServer : HDQueryServer <ASFriendListObserver>

@property (weak, nonatomic) ASActivitySharingManager *activitySharingManager;
@property (nonatomic) long long managerStartAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queryClass;

- (void)_queue_start;
- (void)_queue_stop;
- (void)_queue_activitySharingManagerProcessingStarted;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)friendListDidUpdate:(id)a0;
- (BOOL)_shouldListenForUpdates;
- (void)friendListDidLoadCompetitions;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_activitySharingManagerProcessingStarted;
- (void).cxx_destruct;

@end
