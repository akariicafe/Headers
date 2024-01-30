@interface WKAccessibilityWebPageObjectBase : NSObject {
    struct NakedPtr<WebKit::WebPage> { struct WebPage *m_ptr; } m_page;
    struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } m_pageID;
    struct RetainPtr<id> { void *m_ptr; } m_parent;
    BOOL m_hasMainFramePlugin;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityPluginObject;
- (id)accessibilityRootObjectWrapper;
- (struct NakedPtr<WebCore::AXObjectCache> { struct AXObjectCache *x0; })axObjectCache;
- (void)setHasMainFramePlugin:(BOOL)a0;
- (void)setRemoteParent:(id)a0;
- (void)setWebPage:(struct NakedPtr<WebKit::WebPage> { struct WebPage *x0; })a0;

@end
