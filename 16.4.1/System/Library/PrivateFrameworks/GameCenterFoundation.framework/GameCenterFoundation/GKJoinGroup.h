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

+ (id)joinGroupWithName:(id)a0 taregetQueue:(id)a1;
+ (id)joinGroup;
+ (id)joinGroupForTargetQueue:(id)a0;
+ (id)joinGroupWithName:(id)a0;

- (void)wait;
- (void)dealloc;
- (void)join:(id /* block */)a0;
- (void)applyUpdates;
- (void)_join:(id /* block */)a0;
- (void)aggregateJoin:(id /* block */)a0;
- (void)aggregateJoinLeft:(id /* block */)a0;
- (void)aggregateJoinRight:(id /* block */)a0;
- (id)initWithName:(id)a0 targetQueue:(id)a1;
- (void)joinLeft:(id /* block */)a0;
- (void)joinRight:(id /* block */)a0;
- (void)performLeft:(id /* block */)a0;
- (void)performLeftOnQueue:(id)a0 block:(id /* block */)a1;
- (void)performRight:(id /* block */)a0;
- (void)performRightOnQueue:(id)a0 block:(id /* block */)a1;

@end
