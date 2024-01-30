@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface _COClusterRoleMonitorSnapshotObserver : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSSet *lastValue;
@property (readonly, nonatomic) id cluster;

- (void)notify:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initInCluster:(id)a0 queue:(id)a1 block:(id /* block */)a2;

@end
