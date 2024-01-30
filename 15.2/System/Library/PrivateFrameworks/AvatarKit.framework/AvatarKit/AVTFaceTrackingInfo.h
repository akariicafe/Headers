@class ARFrame;

@interface AVTFaceTrackingInfo : NSObject {
    struct { double timestamp; void /* unknown type, empty encoding */ translation; void /* unknown type, empty encoding */ orientation; BOOL cameraSpace; float blendShapeWeights_smooth[51]; float blendShapeWeights_raw[51]; float parameters_smooth[1]; float parameters_raw[1]; } _trackingData;
    ARFrame *_arFrame;
    double _timestamp;
}

@property (readonly) const struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *trackingData;
@property (readonly, nonatomic) ARFrame *arFrame;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasFaceTrackingData;

+ (id)trackingInfoWithARFrame:(id)a0 worldAlignment:(long long)a1 captureOrientation:(long long)a2 interfaceOrientation:(long long)a3;
+ (id)trackingInfoWithARFrame:(id)a0 inputOrientation:(long long)a1 outputOrientation:(long long)a2;

- (void).cxx_destruct;
- (void)discardARFrame;

@end
