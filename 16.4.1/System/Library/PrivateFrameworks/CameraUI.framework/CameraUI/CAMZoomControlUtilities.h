@interface CAMZoomControlUtilities : NSObject

+ (long long)deviceForEmulatingZoomFactor:(double)a0 fromDevice:(long long)a1 mode:(long long)a2 continuousZoomSupported:(BOOL)a3;
+ (BOOL)shouldEmulateTripleCameraZoomForMode:(long long)a0 device:(long long)a1 videoConfiguration:(long long)a2 videoStabilizationStrength:(long long)a3;
+ (double)piecewiseLinearMappingForX:(double)a0 fromXValues:(id)a1 toYValues:(id)a2;
+ (double)linearMappingForX:(double)a0 x1:(double)a1 y1:(double)a2 x2:(double)a3 y2:(double)a4 clamp:(BOOL)a5;
+ (double)zoomControlDisplayValueForZoomFactor:(double)a0 mode:(long long)a1 device:(long long)a2 videoConfiguration:(long long)a3 videoStabilizationStrength:(long long)a4;
+ (double)zoomControlDisplayValueForZoomFactor:(double)a0 mode:(long long)a1 device:(long long)a2 videoConfiguration:(long long)a3;
+ (double)_baseSingleCameraDeviceForDevice:(long long)a0;
+ (void)layoutZoomControl:(id)a0 layoutSide:(long long)a1 forLayoutStyle:(long long)a2 width:(double)a3 marginForZoomButtonFromEdge:(double)a4 marginForZoomDialFromEdge:(double)a5 zoomDialContentMaskingHeight:(double)a6 centerOfZoomControlInContainerView:(struct CGPoint { double x0; double x1; })a7;
+ (void)layoutZoomControl:(id)a0 forLayoutStyle:(long long)a1 bottomBarAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 bottomBarTransparent:(BOOL)a3 shutterButtonAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 previewViewAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
+ (double)appropriateSignificantZoomFactorForDevice:(long long)a0 fromDevice:(long long)a1 currentZoomFactor:(double)a2 targetZoomFactor:(double)a3 mode:(long long)a4;
+ (double)zoomScaleFromDevice:(long long)a0 toDevice:(long long)a1;
+ (void)layoutZoomControl:(id)a0 forLayoutStyle:(long long)a1 bottomBar:(id)a2 previewView:(id)a3;
+ (double)_zoomControlRadiusForZoomControl:(id)a0 layoutSide:(long long)a1 layoutStyle:(long long)a2 width:(double)a3 centerOfZoomControlInContainerBounds:(struct CGPoint { double x0; double x1; })a4 marginForZoomDiaFromEdge:(double)a5;
+ (BOOL)shouldApplyContinuousZoomForMode:(long long)a0 device:(long long)a1 videoConfiguration:(long long)a2 videoStabilizationStrength:(long long)a3 zoomFactors:(id *)a4 displayZoomFactors:(id *)a5;
+ (BOOL)shouldEmulateWideDualCameraZoomForMode:(long long)a0 device:(long long)a1 videoConfiguration:(long long)a2 videoStabilizationStrength:(long long)a3;

@end
