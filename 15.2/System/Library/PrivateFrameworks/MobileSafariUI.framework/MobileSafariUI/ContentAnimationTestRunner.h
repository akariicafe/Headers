@class NSMutableDictionary;

@interface ContentAnimationTestRunner : PurplePageLoadTestRunner {
    NSMutableDictionary *_outputData;
    double _testDuration;
}

- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (BOOL)startPageAction:(id)a0;
- (id)outputDataForPage:(id)a0;
- (void)finishedTestPage:(id)a0;
- (void)writeOutputData;
- (void)finishedTestRunner;
- (BOOL)performActionForPage:(id)a0;
- (id)finalStatusForPage:(id)a0;

@end
