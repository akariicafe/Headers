@interface WKBrowsingContextHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_pageProxyID) struct ObjectIdentifier<WebKit::WebPageProxyIdentifierType> { unsigned long long m_identifier; } pageProxyID;
@property (readonly, nonatomic, getter=_webPageID) struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } webPageID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initWithPageProxy:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0;
- (id)_initWithPageProxyID:(struct ObjectIdentifier<WebKit::WebPageProxyIdentifierType> { unsigned long long x0; })a0 andWebPageID:(struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; })a1;
- (id)_initWithPage:(struct NakedRef<WebKit::WebPage> { struct WebPage *x0; })a0;
- (id).cxx_construct;

@end
