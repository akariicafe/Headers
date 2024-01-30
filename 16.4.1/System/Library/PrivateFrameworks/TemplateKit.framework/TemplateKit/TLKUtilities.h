@interface TLKUtilities : NSObject

+ (double)onePixelForCurrentScreenResolution;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (double)standardRoundedCornerRadiusRatio;
+ (BOOL)isMacOS;
+ (BOOL)deviceSupportsRotation;
+ (BOOL)isHiddenView:(id)a0;
+ (double)appIconCornerRadiusRatio;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (double)standardTableCellContentInset;
+ (void)performWithoutAnimations:(id /* block */)a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;

@end
