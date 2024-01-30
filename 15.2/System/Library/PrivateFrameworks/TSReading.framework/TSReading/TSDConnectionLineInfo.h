@class TSDDrawableInfo;

@interface TSDConnectionLineInfo : TSDShapeInfo {
    struct { unsigned char connectedFrom : 1; unsigned char connectedTo : 1; } mInvalidFlags;
}

@property (retain, nonatomic) TSDDrawableInfo *connectedFrom;
@property (retain, nonatomic) TSDDrawableInfo *connectedTo;

- (void)didCopy;
- (void)acceptVisitor:(id)a0;
- (void)dealloc;
- (Class)repClass;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (id)presetKind;
- (void)performBlockWithTemporaryLayout:(id /* block */)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutFullTransform;
- (void)willCopyWithOtherDrawables:(id)a0;
- (BOOL)canAnchor;
- (void)computeLayoutInfoGeometry:(id *)a0 andPathSource:(id *)a1;
- (id)computeLayoutInfoGeometry;

@end
