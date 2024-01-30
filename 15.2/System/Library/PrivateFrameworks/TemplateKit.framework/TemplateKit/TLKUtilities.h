@interface TLKUtilities : NSObject

+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (double)standardTableCellContentInset;
+ (BOOL)deviceSupportsRotation;
+ (double)appIconCornerRadiusRatio;
+ (BOOL)isMacOS;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (double)onePixelForCurrentScreenResolution;
+ (BOOL)isHiddenView:(id)a0;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (void)performWithoutAnimations:(id /* block */)a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;

@end
