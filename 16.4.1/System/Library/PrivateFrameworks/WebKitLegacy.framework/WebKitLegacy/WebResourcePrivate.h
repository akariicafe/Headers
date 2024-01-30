@interface WebResourcePrivate : NSObject {
    struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> { struct ArchiveResource *m_ptr; } coreResource;
}

+ (void)initialize;

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoreResource:(void *)a0;

@end
