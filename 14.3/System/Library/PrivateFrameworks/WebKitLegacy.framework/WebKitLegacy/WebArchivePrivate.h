@class WebResource, NSArray;

@interface WebArchivePrivate : NSObject {
    WebResource *cachedMainResource;
    NSArray *cachedSubresources;
    NSArray *cachedSubframeArchives;
    struct RefPtr<WebCore::LegacyWebArchive, WTF::DumbPtrTraits<WebCore::LegacyWebArchive> > { struct LegacyWebArchive *m_ptr; } coreArchive;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithCoreArchive:(struct RefPtr<WebCore::LegacyWebArchive, WTF::DumbPtrTraits<WebCore::LegacyWebArchive> > { struct LegacyWebArchive *x0; } *)a0;
- (struct LegacyWebArchive { void /* function */ **x0; unsigned int x1; struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > { struct ArchiveResource *x0; } x2; struct Vector<WTF::Ref<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct Ref<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > *x0; unsigned int x1; unsigned int x2; } x3; struct Vector<WTF::Ref<WebCore::Archive, WTF::DumbPtrTraits<WebCore::Archive> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct Ref<WebCore::Archive, WTF::DumbPtrTraits<WebCore::Archive> > *x0; unsigned int x1; unsigned int x2; } x4; } *)coreArchive;
- (void)setCoreArchive:(struct Ref<WebCore::LegacyWebArchive, WTF::DumbPtrTraits<WebCore::LegacyWebArchive> > { struct LegacyWebArchive *x0; } *)a0;

@end
