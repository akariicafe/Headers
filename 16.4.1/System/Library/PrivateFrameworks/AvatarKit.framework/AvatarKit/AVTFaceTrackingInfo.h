@interface AVTFaceTrackingInfo : NSObject {
    struct { double timestamp; void /* unknown type, empty encoding */ translation; void /* unknown type, empty encoding */ orientation; BOOL cameraSpace; float blendShapeWeights_smooth[51]; float blendShapeWeights_raw[51]; float parameters_smooth[1]; float parameters_raw[1]; } _trackingData;
    struct { void /* unknown type, empty encoding */ columns[4]; } _rawTransform;
}

@property (readonly) const struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *trackingData;
@property (readonly) const struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *trackingData;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } rawTransform;
@property (readonly, nonatomic) BOOL hasFaceTrackingData;

+ (id)dataWithARFrame:(id)a0 captureOrientation:(long long)a1 interfaceOrientation:(long long)a2;
+ (id)trackingInfoWithARFrame:(id)a0 inputOrientation:(long long)a1 outputOrientation:(long long)a2;
+ (id)trackingInfoWithARFrame:(id)a0 worldAlignment:(long long)a1 captureOrientation:(long long)a2 interfaceOrientation:(long long)a3;
+ (id)trackingInfoWithTrackingData:(struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *)a0;


@end
