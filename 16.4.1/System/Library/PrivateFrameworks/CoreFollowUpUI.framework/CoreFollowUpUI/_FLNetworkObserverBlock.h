@class FLNetworkObserver;

@interface _FLNetworkObserverBlock : NSObject {
    id /* block */ _block;
    FLNetworkObserver *_networkObserver;
}

- (void)executeBlock;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_initWithBlock:(id /* block */)a0 networkObserver:(id)a1;

@end
