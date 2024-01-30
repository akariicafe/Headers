@interface WebNetworkStateObserver : NSObject {
    struct BlockPtr<void ()> { id /* block */ m_block; } block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)networkStateChanged:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
