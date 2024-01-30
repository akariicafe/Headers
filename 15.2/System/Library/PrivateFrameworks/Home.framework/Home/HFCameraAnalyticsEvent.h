@class HMCameraClip, NSDate;

@interface HFCameraAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (weak, nonatomic) HMCameraClip *cameraClip;

+ (id)errorCodeForError:(id)a0;

- (void).cxx_destruct;
- (id)sendEventForState:(unsigned long long)a0;
- (id)initWithCameraClip:(id)a0;

@end
