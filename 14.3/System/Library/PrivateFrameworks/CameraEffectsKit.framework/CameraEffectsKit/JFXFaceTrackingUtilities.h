@interface JFXFaceTrackingUtilities : NSObject

+ (struct { void /* unknown type, empty encoding */ x0[3]; })adjustIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 forRenderSize:(struct CGSize { double x0; double x1; })a1 capturedSize:(struct CGSize { double x0; double x1; })a2 interfaceOrientation:(long long)a3;
+ (id)JFX_faceAnchorWithFaceAnchor:(id)a0 forInterfaceOrientation:(long long)a1;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })JFX_projectionMatrixWithFaceAnchor:(id)a0 bufferSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectOfFaceWithFaceAnchor:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 invertedY:(BOOL)a2 bufferSize:(out struct CGSize { double x0; double x1; } *)a3 transformAnimation:(id)a4 interfaceOrientation:(long long)a5;
+ (void /* unknown type, empty encoding */)pointOnFaceMesh;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectAtNormalizedPointinCenteredSquareInFaceRect:(struct CGPoint { double x0; double x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withFaceAnchor:(id)a2 scaleRelativeToCenterSquare:(double)a3 relativeToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 transformAnimation:(id)a5 interfaceOrientation:(long long)a6;
+ (double)rollAngleFromFaceAnchor:(id)a0 forInterfaceOrientation:(long long)a1;
+ (BOOL)isFaceAnchorInRange:(id)a0;
+ (struct CGSize { double x0; double x1; })faceRectScaleFactorForInterfaceOrientation:(long long)a0 andDeviceInterfaceOrientation:(long long)a1;

@end
