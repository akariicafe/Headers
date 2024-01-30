@class NSDictionary, NSNumber;

@interface HMDCameraRecordingPreferredVideoConfiguration : NSObject

@property (readonly) NSDictionary *bitRateByFrameRate;
@property (readonly) NSNumber *keyFrameInterval;
@property (readonly) long long resolution;
@property (readonly) long long h264Level;

- (void).cxx_destruct;
- (id)description;
- (id)initWithResolution:(long long)a0 bitRateByFrameRate:(id)a1 keyFrameInterval:(id)a2 h264Level:(long long)a3;

@end
