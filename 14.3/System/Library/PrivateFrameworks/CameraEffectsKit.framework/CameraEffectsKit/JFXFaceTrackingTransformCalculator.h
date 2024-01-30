@class JFXARMetadata;

@interface JFXFaceTrackingTransformCalculator : NSObject

@property (retain, nonatomic) JFXARMetadata *arMetadata;
@property (readonly, nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (nonatomic) float pixelsPerUnit;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } cameraProjection;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } cameraTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } onFaceTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } billboardTransform;

- (void).cxx_destruct;
- (id)initWithARMetaData:(id)a0 outputSize:(struct CGSize { double x0; double x1; })a1 interfaceOrientation:(long long)a2;
- (id)calculateFaceTrackingTransform;
- (struct { void /* unknown type, empty encoding */ x0[4]; })nonScaledOrientedCameraTransform;

@end
