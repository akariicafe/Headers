@interface _WKTextInputContext : NSObject <NSCopying> {
    struct ElementContext { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { BOOL hasIntrinsicWidth; BOOL hasIntrinsicHeight; float m_width; float m_height; } m_size; } boundingRect; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } webPageIdentifier; struct ObjectIdentifier<WebCore::DocumentIdentifierType> { unsigned long long m_identifier; } documentIdentifier; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long m_identifier; } elementIdentifier; } _textInputContext;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)_initWithTextInputContext:(const void *)a0;
- (const void *)_textInputContext;

@end
