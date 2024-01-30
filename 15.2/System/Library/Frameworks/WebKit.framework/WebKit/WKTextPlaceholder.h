@interface WKTextPlaceholder : UITextPlaceholder {
    struct ElementContext { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { BOOL hasIntrinsicWidth; BOOL hasIntrinsicHeight; float m_width; float m_height; } m_size; } boundingRect; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } webPageIdentifier; struct ObjectIdentifier<WebCore::DocumentIdentifierType> { unsigned long long m_identifier; } documentIdentifier; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long m_identifier; } elementIdentifier; } _elementContext;
}

@property (readonly, nonatomic) const void *elementContext;

- (id)initWithElementContext:(const void *)a0;
- (id)rects;
- (id).cxx_construct;

@end
