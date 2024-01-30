@class RCMutexLock;

@interface RCOnce : NSObject

@property (nonatomic) BOOL finished;
@property (retain, nonatomic) RCMutexLock *lock;

- (BOOL)trigger;
- (BOOL)hasBeenTriggered;
- (id)init;
- (void)executeOnce:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;

@end
