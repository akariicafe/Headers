@interface TLKUtilities : NSObject

+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (BOOL)isMacOS;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (double)appIconCornerRadiusRatio;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (double)onePixelForCurrentScreenResolution;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (double)standardTableCellContentInset;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (BOOL)deviceSupportsRotation;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;

@end
