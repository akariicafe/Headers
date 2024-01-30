@interface WKTextPlaceholder : UITextPlaceholder {
    struct ElementContext { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } boundingRect; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } webPageIdentifier; struct ObjectIdentifier<WebCore::DocumentIdentifierType> { unsigned long long m_identifier; } documentIdentifier; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long m_identifier; } elementIdentifier; } _elementContext;
}

@property (readonly, nonatomic) const struct ElementContext { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; } x1; struct ObjectIdentifier<WebCore::DocumentIdentifierType> { unsigned long long x0; } x2; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long x0; } x3; } *elementContext;

- (id)rects;
- (id)initWithElementContext:(const struct ElementContext { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; } x1; struct ObjectIdentifier<WebCore::DocumentIdentifierType> { unsigned long long x0; } x2; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long x0; } x3; } *)a0;
- (id).cxx_construct;

@end
