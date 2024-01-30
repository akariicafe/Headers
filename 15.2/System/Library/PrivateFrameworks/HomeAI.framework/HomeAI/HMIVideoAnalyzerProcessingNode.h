@class HMIVideoAnalyzerDynamicConfiguration, HMIVideoAnalyzerConfiguration;

@interface HMIVideoAnalyzerProcessingNode : HMIVideoProcessingNode

@property (readonly) HMIVideoAnalyzerConfiguration *configuration;
@property (retain) HMIVideoAnalyzerDynamicConfiguration *dynamicConfiguration;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
