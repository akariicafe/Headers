@interface WKCustomProtocol : NSURLProtocol {
    struct RetainPtr<__CFRunLoop *> { void *m_ptr; } _initializationRunLoop;
}

@property (readonly, nonatomic) struct ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> { unsigned long long m_identifier; } customProtocolID;
@property (readonly, nonatomic) struct __CFRunLoop { } *initializationRunLoop;

+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)startLoading;
- (void)stopLoading;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;

@end
