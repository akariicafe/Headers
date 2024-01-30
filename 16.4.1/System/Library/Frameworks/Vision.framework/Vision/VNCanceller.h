@interface VNCanceller : NSObject {
    id /* block */ _signallingBlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _signalled;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_releaseSignallingBlock;
- (void)signalCancellation;
- (BOOL)tryToPerformBlock:(id /* block */)a0 usingSignallingBlock:(id /* block */)a1;
- (BOOL)wasSignalled;

@end
