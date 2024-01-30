@interface WebNetworkStateObserver : NSObject {
    struct BlockPtr<void ()> { id /* block */ m_block; } block;
}

- (id).cxx_construct;
- (void)networkStateChanged:(id)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
