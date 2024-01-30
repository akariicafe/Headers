@class NSProgress;

@interface _HDMirroredProgress : NSProgress {
    NSProgress *_originalProgress;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)_KVOKeyPaths;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMirroredProgress:(id)a0;
- (void)_unregisterForKVO;
- (void)_update;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_registerForKVO;

@end
