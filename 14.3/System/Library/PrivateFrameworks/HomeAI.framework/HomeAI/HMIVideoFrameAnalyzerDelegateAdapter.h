@interface HMIVideoFrameAnalyzerDelegateAdapter : HMFObject <HMIVideoFrameAnalyzerDelegate>

@property (copy) id /* block */ frameAnalyzerDidAnalyzeFrame;

- (void).cxx_destruct;
- (void)frameAnalyzer:(id)a0 didAnalyzeFrame:(id)a1 error:(id)a2;

@end
