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

- (id)typeName;
- (void)didCopy;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)a0;
- (Class)repClass;
- (BOOL)isLine;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (id)presetKind;
- (void)performBlockWithTemporaryLayout:(id /* block */)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutFullTransform;
- (void)willCopyWithOtherDrawables:(id)a0;
- (BOOL)canAnchor;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2;
- (void)computeLayoutInfoGeometry:(id *)a0 andPathSource:(id *)a1;
- (id)computeLayoutInfoGeometry;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (void)saveGeometryToArchive:(void *)a0 archiver:(id)a1;

@end
