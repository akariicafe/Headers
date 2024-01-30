@class NSString;
@protocol HMIVideoPackageAnalyzerDelegate;

@interface HMIVideoPackageAnalyzer : HMIVideoProcessingNode <HMFLogging>

@property (weak) id<HMIVideoPackageAnalyzerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
