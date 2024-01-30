@class NSString;

@interface GKObserverTrampoline : NSObject {
    id _observee;
    NSString *_keyPath;
    id /* block */ _block;
    int _cancellationPredicate;
    unsigned long long _options;
}

@property (readonly) id token;

- (void)startObserving;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)cancelObservation;
- (id)initObservingObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3;

@end
