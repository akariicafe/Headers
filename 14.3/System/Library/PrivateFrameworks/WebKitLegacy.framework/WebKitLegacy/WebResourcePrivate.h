@interface WebResourcePrivate : NSObject {
    struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > { struct ArchiveResource *m_ptr; } coreResource;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithCoreResource:(struct Ref<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > { struct ArchiveResource *x0; } *)a0;

@end
