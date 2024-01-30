@class FLNetworkObserver;

@interface _FLNetworkObserverBlock : NSObject {
    id /* block */ _block;
    FLNetworkObserver *_networkObserver;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)executeBlock;
- (id)_initWithBlock:(id /* block */)a0 networkObserver:(id)a1;

@end
