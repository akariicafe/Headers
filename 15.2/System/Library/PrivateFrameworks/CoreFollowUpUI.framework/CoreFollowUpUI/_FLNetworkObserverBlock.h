@class FLNetworkObserver;

@interface _FLNetworkObserverBlock : NSObject {
    id /* block */ _block;
    FLNetworkObserver *_networkObserver;
}

- (void)executeBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithBlock:(id /* block */)a0 networkObserver:(id)a1;

@end
