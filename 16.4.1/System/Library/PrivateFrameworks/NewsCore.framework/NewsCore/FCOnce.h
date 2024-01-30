@class NFUnfairLock;

@interface FCOnce : NSObject {
    BOOL _finished;
    NFUnfairLock *_lock;
}

- (BOOL)trigger;
- (BOOL)hasBeenTriggered;
- (id)init;
- (void)executeOnce:(id /* block */)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;

@end
