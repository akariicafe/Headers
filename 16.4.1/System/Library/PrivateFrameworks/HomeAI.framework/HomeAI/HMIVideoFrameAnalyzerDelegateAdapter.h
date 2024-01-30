@interface HMIVideoFrameAnalyzerDelegateAdapter : HMFObject <HMIVideoFrameAnalyzerDelegate>

@property (copy) id /* block */ frameAnalyzerDidAnalyzeFrame;
@property (copy) id /* block */ frameAnalyzerDidProduceAnalysisStateUpdate;

- (void).cxx_destruct;
- (void)frameAnalyzer:(id)a0 didAnalyzeFrame:(id)a1;
- (void)frameAnalyzer:(id)a0 didProduceAnalysisStateUpdate:(id)a1;

@end
