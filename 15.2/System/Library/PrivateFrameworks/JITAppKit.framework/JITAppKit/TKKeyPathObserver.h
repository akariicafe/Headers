@class NSMutableArray;

@interface TKKeyPathObserver : NSObject {
    id /* block */ _block;
    NSMutableArray *_observations;
}

- (void)stopObserving;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)observe:(id)a0 keyPath:(id)a1;

@end
