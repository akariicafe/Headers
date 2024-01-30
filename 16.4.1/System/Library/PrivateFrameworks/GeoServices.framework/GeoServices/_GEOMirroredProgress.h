@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {
    NSProgress *_originalProgress;
}

- (void)_replaceObservedProgressWith:(id)a0;
- (id)_initWithMirroredProgressForSubclasses:(id)a0;
- (void)_update;
- (void)_unregisterForKVO;
- (void)_registerForKVO;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithMirroredProgress:(id)a0;
- (void).cxx_destruct;

@end
