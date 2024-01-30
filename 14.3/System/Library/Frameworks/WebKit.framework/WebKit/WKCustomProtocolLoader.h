@class NSString, NSURLConnection;

@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate> {
    struct WeakPtr<WebKit::LegacyCustomProtocolManagerProxy, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *m_ptr; } m_impl; } _customProtocolManagerProxy;
    struct ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> { unsigned long long m_identifier; } _customProtocolID;
    unsigned long long _storagePolicy;
    NSURLConnection *_urlConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void).cxx_destruct;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)dealloc;
- (id)connection:(id)a0 willCacheResponse:(id)a1;
- (id)initWithLegacyCustomProtocolManagerProxy:(struct LegacyCustomProtocolManagerProxy { void /* function */ **x0; struct WeakPtrFactory<WebKit::LegacyCustomProtocolManagerProxy, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x1; struct NetworkProcessProxy *x2; } *)a0 customProtocolID:(struct ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> { unsigned long long x0; })a1 request:(id)a2;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id).cxx_construct;

@end
