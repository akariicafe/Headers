@class HMCameraClip, NSDate;

@interface HFCameraAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (weak, nonatomic) HMCameraClip *cameraClip;

+ (id)errorCodeForError:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCameraClip:(id)a0;
- (id)sendEventForState:(unsigned long long)a0;

@end
