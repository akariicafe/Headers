@interface TKDisplayLinkManagerObserver : NSObject {
    id /* block */ _block;
    unsigned long long _frameInterval;
    unsigned long long _displayDidRefreshCount;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)displayDidRefresh:(id)a0;
- (id)initWithBlock:(id /* block */)a0 frameInterval:(unsigned long long)a1;

@end
