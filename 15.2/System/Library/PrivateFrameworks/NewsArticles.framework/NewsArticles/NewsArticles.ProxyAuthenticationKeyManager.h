@interface NewsArticles.ProxyAuthenticationKeyManager : NSObject <SXProxyAuthenticationKeyProvider> {
    void /* unknown type, empty encoding */ endpointConnection;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ deduper;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ key;
    void /* unknown type, empty encoding */ session;
}

- (void)requestAuthenticationKeyWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
