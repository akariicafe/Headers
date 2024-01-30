@class PXCuratedLibraryLayoutSnapshotGeometryDescriptor, NSArray, PXVisualPositionsChangeDetails, PXCuratedLibrarySectionGeometryDescriptor, NSObject;
@protocol UICoordinateSpace;

@interface _PXCuratedLibraryLayoutZoomLevelChangeAnimationHelper : PXCuratedLibraryLayoutAnimationHelper {
    unsigned long long _userInterfaceDirection;
    PXCuratedLibraryLayoutSnapshotGeometryDescriptor *_fromLayoutSnapshotGeometryDescriptor;
    PXCuratedLibraryLayoutSnapshotGeometryDescriptor *_toLayoutSnapshotGeometryDescriptor;
    NSArray *_changeDetails;
    PXVisualPositionsChangeDetails *_visualPositionsChangeDetails;
    long long _transitionType;
    PXCuratedLibrarySectionGeometryDescriptor *_nullSectionGeometryDescriptor;
    NSObject<UICoordinateSpace> *_coordinateSpace;
    BOOL _shouldAlwaysFadeDecoration;
}

- (double)animationDuration;
- (void).cxx_destruct;
- (BOOL)wantsDoubleSidedAnimations;
- (void)animation:(id)a0 adjustPresentedGeometries:(struct { struct { double x0; double x1; float x2; } x0; } *)a1 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a2 infos:(struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 count:(unsigned int)a4;
- (id)animation:(id)a0 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)a1 rootLayout:(id)a2 presentedGeometries:(const struct { struct { double x0; double x1; float x2; } x0; } *)a3 styles:(const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a4 infos:(const struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a5;
- (void)animation:(id)a0 prepareWithRootLayout:(id)a1 viewportShift:(struct CGPoint { double x0; double x1; })a2;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; float x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a2 infos:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;
- (id)initWithLayout:(id)a0;
- (BOOL)wantsPresentationAdjustment;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; float x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a2 infos:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;
- (void)_adjustGeometries:(inout struct { struct { double x0; double x1; float x2; } x0; } *)a0 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a1 infos:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a2 spriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a3 appearing:(BOOL)a4;

@end
