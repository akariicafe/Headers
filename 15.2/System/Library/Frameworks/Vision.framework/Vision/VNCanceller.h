@interface VNCanceller : NSObject {
    id /* block */ _signallingBlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _signalled;
}

- (BOOL)tryToPerformBlock:(id /* block */)a0 usingSignallingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)signalCancellation;
- (id)init;
- (void)_releaseSignallingBlock;
- (void)reset;
- (BOOL)wasSignalled;

@end
