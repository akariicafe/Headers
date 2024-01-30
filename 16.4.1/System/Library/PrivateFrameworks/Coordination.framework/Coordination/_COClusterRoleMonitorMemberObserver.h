@class COClusterMember, COClusterRole, NSObject;
@protocol OS_dispatch_queue;

@interface _COClusterRoleMonitorMemberObserver : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) COClusterRole *lastValue;
@property (readonly, nonatomic) COClusterMember *member;
@property (readonly, nonatomic) id cluster;

- (void)notify:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMember:(id)a0 inCluster:(id)a1 queue:(id)a2 block:(id /* block */)a3;

@end
