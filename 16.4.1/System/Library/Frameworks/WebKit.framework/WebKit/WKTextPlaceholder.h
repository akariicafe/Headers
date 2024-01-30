@interface WKTextPlaceholder : UITextPlaceholder {
    struct ElementContext { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } boundingRect; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } webPageIdentifier; struct ProcessQualified<WTF::UUID> { struct UUID { unsigned __int128 m_data; } m_object; struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long m_identifier; } m_processIdentifier; } documentIdentifier; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long m_identifier; } elementIdentifier; } _elementContext;
}

@property (readonly, nonatomic) const void *elementContext;

- (id).cxx_construct;
- (id)rects;
- (id)initWithElementContext:(const void *)a0;

@end
