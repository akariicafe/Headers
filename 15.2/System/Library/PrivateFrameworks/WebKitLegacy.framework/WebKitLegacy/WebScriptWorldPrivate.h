@interface WebScriptWorldPrivate : NSObject {
    struct RefPtr<WebCore::DOMWrapperWorld, WTF::RawPtrTraits<WebCore::DOMWrapperWorld>, WTF::DefaultRefDerefTraits<WebCore::DOMWrapperWorld>> { struct DOMWrapperWorld *m_ptr; } world;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
