@class NSString;

@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate> {
    struct WeakPtr<WebKit::LegacyCustomProtocolManagerProxy, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _customProtocolManagerProxy;
    struct ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> { unsigned long long m_identifier; } _customProtocolID;
    unsigned long long _storagePolicy;
    struct RetainPtr<NSURLConnection> { void *m_ptr; } _urlConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (id)connection:(id)a0 willCacheResponse:(id)a1;
- (id)initWithLegacyCustomProtocolManagerProxy:(void *)a0 customProtocolID:(struct ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> { unsigned long long x0; })a1 request:(id)a2;
- (void)connectionDidFinishLoading:(id)a0;
- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)dealloc;
- (void)cancel;
- (id).cxx_construct;

@end
