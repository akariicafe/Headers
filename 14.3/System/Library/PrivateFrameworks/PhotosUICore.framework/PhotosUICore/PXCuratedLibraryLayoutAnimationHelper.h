@class NSDictionary, NSString, PXCuratedLibraryLayout;

@interface PXCuratedLibraryLayoutAnimationHelper : NSObject <PXGAnimationDelegate>

@property (retain, nonatomic) NSDictionary *userData;
@property (readonly, weak) PXCuratedLibraryLayout *layout;
@property (readonly, nonatomic) long long animationCurve;
@property (readonly, nonatomic) double animationDuration;
@property (readonly, nonatomic) BOOL wantsDoubleSidedAnimations;
@property (readonly, nonatomic) BOOL wantsPresentationAdjustment;
@property (readonly, nonatomic) BOOL wantsAnimationWithSpriteTransfer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createAnimationIfNeededForLayout:(id)a0 context:(long long)a1 userData:(id)a2;
+ (id)createTransitionIfNeededForLayout:(id)a0 context:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)animation:(id)a0 prepareWithRootLayout:(id)a1 viewportShift:(struct CGPoint { double x0; double x1; })a2;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; float x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a2 infos:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;
- (id)initWithLayout:(id)a0;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; float x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a2 infos:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;

@end
