@class NSMutableArray, NSError, NSLock, GKUpdateGroup;

@interface GKUpdateGroupNotifier : NSObject

@property (weak, nonatomic) GKUpdateGroup *group;
@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *updateQueue;
@property (retain) NSError *error;

- (id)retain;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (oneway void)release;
- (void)addUpdatesFromGroup:(id)a0;
- (void)addUpdate:(id /* block */)a0 error:(id)a1;
- (void)updateError:(id)a0;

@end
