@interface WebScriptWorldPrivate : NSObject {
    struct RefPtr<WebCore::DOMWrapperWorld, WTF::DumbPtrTraits<WebCore::DOMWrapperWorld> > { struct DOMWrapperWorld *m_ptr; } world;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
