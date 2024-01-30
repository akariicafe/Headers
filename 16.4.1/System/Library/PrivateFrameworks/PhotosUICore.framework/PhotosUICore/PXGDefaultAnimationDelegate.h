@class NSString;

@interface PXGDefaultAnimationDelegate : NSObject <PXGAnimationDelegate>

@property (class, readonly, nonatomic) PXGDefaultAnimationDelegate *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)adjustGeometry:(inout struct { struct { double x0; double x1; double x2; } x0; } *)a0 style:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a1 info:(inout struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a2 forTextSpriteAnimatingFromAttributes:(const struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; double x2; struct CGPoint { double x0; double x1; } x3; } *)a3 toAttributes:(const struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; double x2; struct CGPoint { double x0; double x1; } x3; } *)a4 inRootLayout:(id)a5;

@end
