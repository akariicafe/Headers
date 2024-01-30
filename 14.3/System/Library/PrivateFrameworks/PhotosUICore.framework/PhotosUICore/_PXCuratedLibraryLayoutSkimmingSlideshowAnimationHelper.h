@interface _PXCuratedLibraryLayoutSkimmingSlideshowAnimationHelper : PXCuratedLibraryLayoutAnimationHelper {
    unsigned long long _userInterfaceDirection;
    struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } _fromIndexPath;
    struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } _toIndexPath;
}

- (double)animationDuration;
- (void)setUserData:(id)a0;
- (BOOL)_shoulAnimateSpriteWithInfo:(const struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a0 matchingSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1 spriteKind:(out unsigned char *)a2;
- (BOOL)wantsDoubleSidedAnimations;
- (id)animation:(id)a0 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)a1 rootLayout:(id)a2 presentedGeometries:(const struct { struct { double x0; double x1; float x2; } x0; } *)a3 styles:(const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a4 infos:(const struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a5;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; float x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a2 infos:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;
- (long long)animationCurve;
- (id)initWithLayout:(id)a0;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; float x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a2 infos:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;
- (void)_adjustGeometries:(inout struct { struct { double x0; double x1; float x2; } x0; } *)a0 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a1 infos:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a2 spriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a3 appearing:(BOOL)a4;

@end
