@interface WKCustomProtocol : NSURLProtocol {
    struct RetainPtr<__CFRunLoop *> { void *m_ptr; } _initializationRunLoop;
}

@property (readonly, nonatomic) struct ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> { unsigned long long m_identifier; } customProtocolID;
@property (readonly, nonatomic) struct __CFRunLoop { } *initializationRunLoop;

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;

- (void)startLoading;
- (void).cxx_destruct;
- (void)stopLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (id).cxx_construct;

@end
