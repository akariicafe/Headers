@class NSMutableArray, NSError, NSLock, GKUpdateGroup;

@interface GKUpdateGroupNotifier : NSObject

@property (weak, nonatomic) GKUpdateGroup *group;
@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *updateQueue;
@property (retain) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (void)updateError:(id)a0;
- (void)addUpdatesFromGroup:(id)a0;
- (void)addUpdate:(id /* block */)a0 error:(id)a1;

@end
