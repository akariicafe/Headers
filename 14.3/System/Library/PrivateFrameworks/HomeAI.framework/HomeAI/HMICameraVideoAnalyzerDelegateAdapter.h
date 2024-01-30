@class NSString;

@interface HMICameraVideoAnalyzerDelegateAdapter : NSObject <HMICameraVideoAnalyzerDelegate>

@property (copy, nonatomic) id /* block */ didAnalyzeFragment;
@property (copy, nonatomic) id /* block */ didFailAnalysisForFragment;
@property (copy, nonatomic) id /* block */ didFindSignificantEvent;
@property (copy, nonatomic) id /* block */ didNotAnalyzeFragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_finish;
- (void)analyzer:(id)a0 didAnalyzeFragment:(id)a1 withResult:(id)a2;
- (void)analyzer:(id)a0 didNotAnalyzeFragment:(id)a1 withResult:(id)a2;
- (void)analyzer:(id)a0 didFailAnalysisForFragment:(id)a1 withError:(id)a2;
- (void)analyzer:(id)a0 didFindSignificantEvent:(id)a1 inFragment:(id)a2;

@end
