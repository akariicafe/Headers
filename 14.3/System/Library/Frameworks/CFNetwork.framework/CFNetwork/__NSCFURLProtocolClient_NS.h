@class NSString, NSURLAuthenticationChallenge;

@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient> {
    struct URLProtocolClient { void /* function */ **x0; } *_cf;
    struct URLProtocol { void /* function */ **x0; void /* function */ **x1; void /* function */ **x2; struct CoreSchedulingSet *x3; double x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; long long x12; long long x13; struct Throttler *x14; BOOL x15; id x16; id x17; struct URLProtocolClient *x18; struct _CFCachedURLResponse *x19; } *_prot;
    NSURLAuthenticationChallenge *_challenge;
    struct _CFURLAuthChallenge { } *_cfChallenge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLProtocol:(id)a0 wasRedirectedToRequest:(id)a1 redirectResponse:(id)a2;
- (void)URLProtocol:(id)a0 didCancelAuthenticationChallenge:(id)a1;
- (void)URLProtocol:(id)a0 cachedResponseIsValid:(id)a1;
- (void)URLProtocol:(id)a0 didReceiveResponse:(id)a1 cacheStoragePolicy:(unsigned long long)a2;
- (void)URLProtocol:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)URLProtocolDidFinishLoading:(id)a0;
- (void)URLProtocol:(id)a0 didLoadData:(id)a1;
- (void)URLProtocol:(id)a0 didFailWithError:(id)a1;
- (void)dealloc;

@end
