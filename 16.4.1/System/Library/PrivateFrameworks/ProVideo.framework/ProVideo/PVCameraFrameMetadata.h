@interface PVCameraFrameMetadata : NSObject

@property (readonly, nonatomic) long long cameraPosition;
@property (readonly, nonatomic) struct { double x; double y; double z; double w; } orientation;
@property (readonly, nonatomic) double rollRadians;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) long long captureVideoOrientation;

+ (id)frameMetadata:(long long)a0 :(struct { double x0; double x1; double x2; double x3; })a1 :(double)a2 :(long long)a3 :(long long)a4;

- (id)description;

@end
