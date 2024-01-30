@class NSObject, NSString, NSError, NSLock, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface GKJoinGroup : NSObject {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *leftNotifiers;
@property (retain, nonatomic) NSMutableArray *rightNotifiers;
@property (retain) NSMutableArray *leftResults;
@property (retain) NSMutableArray *rightResults;
@property (retain) NSError *error;
@property (retain, nonatomic) NSString *name;

+ (id)joinGroup;
+ (id)joinGroupWithName:(id)a0;
+ (id)joinGroupForTargetQueue:(id)a0;
+ (id)joinGroupWithName:(id)a0 taregetQueue:(id)a1;

- (void)_join:(id /* block */)a0;
- (void)join:(id /* block */)a0;
- (void)dealloc;
- (void)wait;
- (void)applyUpdates;
- (id)initWithName:(id)a0 targetQueue:(id)a1;
- (void)performLeftOnQueue:(id)a0 block:(id /* block */)a1;
- (void)performRightOnQueue:(id)a0 block:(id /* block */)a1;
- (void)aggregateJoin:(id /* block */)a0;
- (void)aggregateJoinLeft:(id /* block */)a0;
- (void)aggregateJoinRight:(id /* block */)a0;
- (void)performLeft:(id /* block */)a0;
- (void)performRight:(id /* block */)a0;
- (void)joinLeft:(id /* block */)a0;
- (void)joinRight:(id /* block */)a0;

@end
