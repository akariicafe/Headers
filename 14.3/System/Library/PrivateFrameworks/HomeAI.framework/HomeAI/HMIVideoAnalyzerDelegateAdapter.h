@class NSString;

@interface HMIVideoAnalyzerDelegateAdapter : HMFObject <HMIVideoAnalyzerDelegate>

@property (copy) id /* block */ analyzerDidAnalyzeFrame;
@property (copy) id /* block */ analyzerDidAnalyzeFragment;
@property (copy) id /* block */ analyzerDidFailWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
