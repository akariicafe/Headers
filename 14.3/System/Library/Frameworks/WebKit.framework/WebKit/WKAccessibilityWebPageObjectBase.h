@interface WKAccessibilityWebPageObjectBase : NSObject {
    struct NakedPtr<WebKit::WebPage> { struct WebPage *m_ptr; } m_page;
    struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } m_pageID;
    id m_parent;
    BOOL m_hasMainFramePlugin;
}

- (id)accessibilityRootObjectWrapper;
- (void)setHasMainFramePlugin:(BOOL)a0;
- (void)setWebPage:(struct NakedPtr<WebKit::WebPage> { struct WebPage *x0; })a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityPluginObject;
- (void)setRemoteParent:(id)a0;
- (id).cxx_construct;
- (struct NakedPtr<WebCore::AXObjectCache> { struct AXObjectCache *x0; })axObjectCache;

@end
