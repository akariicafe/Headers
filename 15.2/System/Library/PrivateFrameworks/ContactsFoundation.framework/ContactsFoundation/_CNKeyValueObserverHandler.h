@class NSString;
@protocol CNObserver;

@interface _CNKeyValueObserverHandler : NSObject {
    id _object;
    NSString *_keyPath;
    id<CNObserver> _observer;
}

- (void)stopObserving;
- (void)startObservingWithOptions:(unsigned long long)a0;
- (id)initWithObject:(id)a0 keyPath:(id)a1 observer:(id)a2;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
