@interface WebAVPlayerControllerForwarder : NSObject {
    struct RetainPtr<WebAVPlayerController> { void *m_ptr; } _playerController;
}

- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id).cxx_construct;
- (id)valueForKeyPath:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)valueForKey:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_forwardingTargetForKeyPath:(id)a0;

@end
