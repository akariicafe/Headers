@class ARFrame;

@interface AVTFaceTrackingInfo : NSObject {
    struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *_trackingData;
    BOOL _deleteWhenDone;
    ARFrame *_arFrame;
    double _timestamp;
}

@property (readonly, nonatomic) ARFrame *arFrame;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasFaceTrackingData;

+ (id)trackingInfoWithARFrame:(id)a0 inputOrientation:(long long)a1 outputOrientation:(long long)a2;
+ (id)trackingInfoWithARFrame:(id)a0 inputOrientation:(long long)a1 outputOrientation:(long long)a2 constrainHeadPose:(BOOL)a3;
+ (id)trackingInfoWrappingTrackingData:(struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *)a0;
+ (id)trackingInfoWithARFrame:(id)a0;
+ (id)trackingInfoWithARFrame:(id)a0 orientation:(long long)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (struct { double x0; BOOL x1; float x2[51]; float x3[51]; float x4[1]; float x5[1]; } *)trackingData;
- (void)discardARFrame;

@end
