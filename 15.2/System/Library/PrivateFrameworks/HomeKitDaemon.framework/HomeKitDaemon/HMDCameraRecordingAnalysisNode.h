@class HMDDevice, NSDictionary;

@interface HMDCameraRecordingAnalysisNode : HMFObject

@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, copy, nonatomic) NSDictionary *metrics;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 metrics:(id)a1;

@end
