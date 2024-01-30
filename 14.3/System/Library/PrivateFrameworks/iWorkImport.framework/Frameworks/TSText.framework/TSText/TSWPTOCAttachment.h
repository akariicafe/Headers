@class TSWPTOCInfo;

@interface TSWPTOCAttachment : TSWPDrawableAttachment

@property (readonly, retain, nonatomic) TSWPTOCInfo *tocInfo;

- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadTOCAttachmentMessage:(const struct TOCAttachmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct DrawableAttachmentArchive *x4; } *)a0 fromUnarchiver:(id)a1;
- (void)saveTOCAttachmentMessage:(struct TOCAttachmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct DrawableAttachmentArchive *x4; } *)a0 archiver:(id)a1;

@end
