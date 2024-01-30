@class NSMutableArray, NSError, NSLock, GKJoinGroup;

@interface GKJoinGroupNotifier : NSObject

@property (weak, nonatomic) GKJoinGroup *group;
@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *updateQueue;
@property (retain) NSError *error;

- (void)setResult:(id /* block */)a0 error:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (oneway void)release;
- (void)dealloc;
- (id)retain;

@end
