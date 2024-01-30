@class ASActivitySharingManager, NSString;

@interface ASFriendListQueryServer : HDQueryServer <ASFriendListObserver>

@property (weak, nonatomic) ASActivitySharingManager *activitySharingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queryClass;

- (void).cxx_destruct;
- (BOOL)_shouldListenForUpdates;
- (void)_queue_start;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_stop;
- (void)friendListDidUpdate:(id)a0;
- (void)friendListDidLoadCompetitions;

@end
