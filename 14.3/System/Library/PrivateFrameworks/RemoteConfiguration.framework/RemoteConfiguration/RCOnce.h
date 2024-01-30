@class RCMutexLock;

@interface RCOnce : NSObject

@property (nonatomic) BOOL finished;
@property (retain, nonatomic) RCMutexLock *lock;

- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)trigger;
- (id)init;
- (void).cxx_destruct;
- (void)executeOnce:(id /* block */)a0;
- (BOOL)hasBeenTriggered;

@end
