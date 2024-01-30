@interface TKDisplayLinkManagerObserver : NSObject {
    id /* block */ _block;
    unsigned long long _frameInterval;
    unsigned long long _displayDidRefreshCount;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)displayDidRefresh:(id)a0;
- (id)initWithBlock:(id /* block */)a0 frameInterval:(unsigned long long)a1;

@end
