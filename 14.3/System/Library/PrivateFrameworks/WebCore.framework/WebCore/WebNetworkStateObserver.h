@interface WebNetworkStateObserver : NSObject {
    id /* block */ block;
}

- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (void)networkStateChanged:(id)a0;

@end
