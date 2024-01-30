@interface WebArchivePrivate : NSObject {
    struct RetainPtr<WebResource> { void *m_ptr; } cachedMainResource;
    struct RetainPtr<NSArray> { void *m_ptr; } cachedSubresources;
    struct RetainPtr<NSArray> { void *m_ptr; } cachedSubframeArchives;
    struct RefPtr<WebCore::LegacyWebArchive, WTF::RawPtrTraits<WebCore::LegacyWebArchive>, WTF::DefaultRefDerefTraits<WebCore::LegacyWebArchive>> { struct LegacyWebArchive *m_ptr; } coreArchive;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithCoreArchive:(void *)a0;
- (void *)coreArchive;
- (void)setCoreArchive:(void *)a0;

@end
