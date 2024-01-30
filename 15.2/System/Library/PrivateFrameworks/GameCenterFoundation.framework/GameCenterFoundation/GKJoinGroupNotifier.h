@class NSMutableArray, NSError, NSLock, GKJoinGroup;

@interface GKJoinGroupNotifier : NSObject

@property (weak, nonatomic) GKJoinGroup *group;
@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *updateQueue;
@property (retain) NSError *error;

- (id)retain;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (oneway void)release;
- (void)setResult:(id /* block */)a0 error:(id)a1;

@end
