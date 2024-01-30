@interface _NSCFURLProtocol : NSURLProtocol {
    struct _CFURLProtocol { } *_prot;
    struct NSCFURLProtocolClient { void /* function */ **x0; void /* function */ **x1; id x2; id x3; } *_client;
}

+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (const struct InternalProtocolImplementation { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; } *)_cf_internalImpl;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithTask:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0 task:(id)a1;

- (void)startLoading;
- (void)stopLoading;
- (void)dealloc;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;

@end
