@class AVCallbackContextRegistry;

@interface AVKVODispatcher : NSObject {
    AVCallbackContextRegistry *_callbackContextRegistry;
}

+ (id)sharedKVODispatcher;

- (id)startObservingValueAtKeyPath:(id)a0 ofObject:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)startObservingObject:(id)a0 weakObserver:(id)a1 forTwoPartKeyPath:(id)a2 options:(unsigned long long)a3 context:(void *)a4;
- (id)initWithDescriptionOfHowAllObservedPropertyChangesAreSerializedWithDispatcherDeallocation:(id)a0;
- (id)startObservingValueAtTwoPartKeyPath:(id)a0 ofObject:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)startObservingObject:(id)a0 weakObserver:(id)a1 forKeyPath:(id)a2 options:(unsigned long long)a3 context:(void *)a4;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)startObservingValueAtKeyPath:(id)a0 withoutKeepingAliveObservedObject:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;

@end
