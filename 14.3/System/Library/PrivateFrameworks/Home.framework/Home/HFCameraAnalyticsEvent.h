@class HMCameraClip, NSDate;

@interface HFCameraAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (weak, nonatomic) HMCameraClip *cameraClip;

- (void).cxx_destruct;
- (void)sendEventForState:(unsigned long long)a0;
- (id)initWithCameraClip:(id)a0;

@end
