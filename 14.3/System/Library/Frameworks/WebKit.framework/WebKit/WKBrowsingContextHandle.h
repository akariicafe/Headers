@interface WKBrowsingContextHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_pageProxyID) struct ObjectIdentifier<WebKit::WebPageProxyIdentifierType> { unsigned long long m_identifier; } pageProxyID;
@property (readonly, nonatomic, getter=_webPageID) struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } webPageID;

- (id)_initWithPageProxy:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0;
- (id)_initWithPageProxyID:(struct ObjectIdentifier<WebKit::WebPageProxyIdentifierType> { unsigned long long x0; })a0 andWebPageID:(struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; })a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithPage:(struct NakedRef<WebKit::WebPage> { struct WebPage *x0; })a0;

@end
