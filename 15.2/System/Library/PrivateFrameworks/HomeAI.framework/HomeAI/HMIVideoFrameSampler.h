@class NSString;
@protocol HMIVideoFrameSamplerDelegate;

@interface HMIVideoFrameSampler : HMIVideoProcessingNode <HMFLogging>

@property (weak) id<HMIVideoFrameSamplerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
