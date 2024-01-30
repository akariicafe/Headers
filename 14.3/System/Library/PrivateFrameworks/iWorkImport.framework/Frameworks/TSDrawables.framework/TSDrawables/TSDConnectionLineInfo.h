@class NSUUID, TSDDrawableInfo;

@interface TSDConnectionLineInfo : TSDShapeInfo {
    struct { unsigned char connectedFrom : 1; unsigned char connectedTo : 1; } mInvalidFlags;
    BOOL mWriteConnectedReferencesForCopies;
}

@property (retain, nonatomic) NSUUID *connectedFromID;
@property (retain, nonatomic) NSUUID *connectedToID;
@property (retain, nonatomic) TSDDrawableInfo *connectedFromInfo;
@property (retain, nonatomic) TSDDrawableInfo *connectedToInfo;
@property (retain, nonatomic) TSDDrawableInfo *connectedFrom;
@property (retain, nonatomic) TSDDrawableInfo *connectedTo;

- (void)didCopy;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (BOOL)isLine;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (id)presetKind;
- (void)performBlockWithTemporaryLayout:(id /* block */)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutFullTransform;
- (void)willCopyWithOtherDrawables:(id)a0;
- (BOOL)canAnchor;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2;
- (void)computeLayoutInfoGeometry:(id *)a0 andPathSource:(id *)a1;
- (id)computeLayoutInfoGeometry;
- (void)loadFromArchive:(const struct ConnectionLineArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ShapeArchive *x4; struct Reference *x5; struct Reference *x6; struct UUID *x7; struct UUID *x8; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ConnectionLineArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ShapeArchive *x4; struct Reference *x5; struct Reference *x6; struct UUID *x7; struct UUID *x8; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (void)saveGeometryToArchive:(struct GeometryArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Point *x4; struct Size *x5; unsigned int x6; float x7; } *)a0 archiver:(id)a1;

@end
