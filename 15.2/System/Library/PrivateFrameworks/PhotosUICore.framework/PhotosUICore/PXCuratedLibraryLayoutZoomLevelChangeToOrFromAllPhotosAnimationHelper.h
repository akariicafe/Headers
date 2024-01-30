@class _PXCuratedLibraryLayoutAssetsSnapshot;

@interface PXCuratedLibraryLayoutZoomLevelChangeToOrFromAllPhotosAnimationHelper : PXCuratedLibraryLayoutAnimationHelper {
    _PXCuratedLibraryLayoutAssetsSnapshot *_fromSnapshot;
    _PXCuratedLibraryLayoutAssetsSnapshot *_toSnapshot;
}

- (unsigned int)highFrameRateReason;
- (id)initWithLayout:(id)a0;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; } *)a2 infos:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;
- (void)_adjustGeometries:(inout struct { struct { double x0; double x1; double x2; } x0; } *)a0 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; } *)a1 infos:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a2 spriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a3 appearing:(BOOL)a4;
- (double)animationDuration;
- (void).cxx_destruct;
- (void)animation:(id)a0 prepareWithRootLayout:(id)a1 viewportShift:(struct CGPoint { double x0; double x1; })a2;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; } *)a2 infos:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;
- (id)_snapshotForZoomLevel:(long long)a0;

@end
