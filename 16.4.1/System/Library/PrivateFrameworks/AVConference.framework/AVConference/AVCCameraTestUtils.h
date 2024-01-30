@interface AVCCameraTestUtils : NSObject

+ (BOOL)expectedGFTResolutionForDevice:(id)a0 ratio:(struct CGSize { double x0; double x1; } *)a1;
+ (BOOL)expectedPreviewResolutionForDevice:(id)a0 width:(int *)a1 height:(int *)a2;
+ (BOOL)findExpectedFramerate:(float *)a0 forDevice:(id)a1;

@end
