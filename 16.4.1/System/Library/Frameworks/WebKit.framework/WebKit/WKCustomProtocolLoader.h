@class NSString;

@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate> {
    struct WeakPtr<WebKit::LegacyCustomProtocolManagerProxy, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _customProtocolManagerProxy;
    struct ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> { unsigned long long m_identifier; } _customProtocolID;
    unsigned long long _storagePolicy;
    struct RetainPtr<NSURLConnection> { void *m_ptr; } _urlConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)cancel;
- (void)dealloc;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void).cxx_destruct;
- (id)connection:(id)a0 willCacheResponse:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (id)initWithLegacyCustomProtocolManagerProxy:(void *)a0 customProtocolID:(struct ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> { unsigned long long x0; })a1 request:(id)a2;

@end
