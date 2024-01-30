@class NSArray, NSData, WebResource, WebArchivePrivate;

@interface WebArchive : NSObject <NSCoding, NSCopying> {
    WebArchivePrivate *_private;
}

@property (readonly, nonatomic) WebResource *mainResource;
@property (readonly, copy, nonatomic) NSArray *subresources;
@property (readonly, copy, nonatomic) NSArray *subframeArchives;
@property (readonly, copy, nonatomic) NSData *data;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)initWithMainResource:(id)a0 subresources:(id)a1 subframeArchives:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithCoreLegacyWebArchive:(struct RefPtr<WebCore::LegacyWebArchive, WTF::DumbPtrTraits<WebCore::LegacyWebArchive> > { struct LegacyWebArchive *x0; } *)a0;
- (struct LegacyWebArchive { void /* function */ **x0; unsigned int x1; struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > { struct ArchiveResource *x0; } x2; struct Vector<WTF::Ref<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct Ref<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > *x0; unsigned int x1; unsigned int x2; } x3; struct Vector<WTF::Ref<WebCore::Archive, WTF::DumbPtrTraits<WebCore::Archive> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct Ref<WebCore::Archive, WTF::DumbPtrTraits<WebCore::Archive> > *x0; unsigned int x1; unsigned int x2; } x4; } *)_coreLegacyWebArchive;

@end
