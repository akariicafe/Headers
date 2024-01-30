@class NFUnfairLock;

@interface FCOnce : NSObject {
    BOOL _finished;
    NFUnfairLock *_lock;
}

- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)hasBeenTriggered;
- (void).cxx_destruct;
- (id)init;
- (BOOL)trigger;
- (void)executeOnce:(id /* block */)a0;

@end
