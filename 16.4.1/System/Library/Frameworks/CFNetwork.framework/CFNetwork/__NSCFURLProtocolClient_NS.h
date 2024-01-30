@class NSString, NSURLAuthenticationChallenge;

@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient> {
    struct URLProtocolClient { void /* function */ **x0; } *_cf;
    void *_prot;
    NSURLAuthenticationChallenge *_challenge;
    struct _CFURLAuthChallenge { } *_cfChallenge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)URLProtocol:(id)a0 cachedResponseIsValid:(id)a1;
- (void)URLProtocol:(id)a0 didCancelAuthenticationChallenge:(id)a1;
- (void)URLProtocol:(id)a0 didFailWithError:(id)a1;
- (void)URLProtocol:(id)a0 didLoadData:(id)a1;
- (void)URLProtocol:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)URLProtocol:(id)a0 didReceiveResponse:(id)a1 cacheStoragePolicy:(unsigned long long)a2;
- (void)URLProtocol:(id)a0 wasRedirectedToRequest:(id)a1 redirectResponse:(id)a2;
- (void)URLProtocolDidFinishLoading:(id)a0;

@end
