@interface KNPlaceholderInfo : TSWPShapeInfo

+ (Class)classForUnarchiver:(id)a0;

- (int)kind;
- (BOOL)isEmpty;
- (Class)repClass;
- (Class)layoutClass;
- (BOOL)displaysInstructionalText;
- (BOOL)autoListRecognition;
- (BOOL)autoListTermination;
- (BOOL)shouldHideEmptyBullets;
- (void)loadFromArchive:(const struct PlaceholderArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ShapeInfoArchive *x4; int x5; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct PlaceholderArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ShapeInfoArchive *x4; int x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)copyAsShapeInfoWithContext:(id)a0;
- (BOOL)isAllowedInGroups;
- (id)defaultInstructionalText;
- (BOOL)remainsInDocumentWhenDeletedFromChildInfos;

@end
