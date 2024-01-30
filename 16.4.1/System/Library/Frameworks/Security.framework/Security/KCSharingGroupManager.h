@class KCSharingDaemonConnection;

@interface KCSharingGroupManager : NSObject

@property (retain, nonatomic) KCSharingDaemonConnection *daemonConnection;

+ (id)sharedInstance;

- (void)test;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)acceptInviteForGroupID:(id)a0 completion:(id /* block */)a1;
- (void)checkAvailabilityForHandle:(id)a0 completion:(id /* block */)a1;
- (void)checkAvailabilityForHandles:(id)a0 completion:(id /* block */)a1;
- (void)createGroupWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)declineInviteForGroupID:(id)a0 completion:(id /* block */)a1;
- (void)deleteGroupWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)getGroupByGroupID:(id)a0 completion:(id /* block */)a1;
- (void)getGroupsWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemonConnection:(id)a0;
- (void)leaveGroupWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)pingDaemonsWithReply:(id /* block */)a0;
- (void)updateGroupWithRequest:(id)a0 completion:(id /* block */)a1;

@end
