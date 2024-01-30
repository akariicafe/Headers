@class NSMutableDictionary;

@interface PurplePageLoadTestRunner : PageLoadTestRunner {
    NSMutableDictionary *_pptResults;
    NSMutableDictionary *_iterationResults;
}

@property (nonatomic) BOOL showLoadTime;
@property (nonatomic) BOOL showFirstVisualLayoutTime;
@property (nonatomic) BOOL showRenderTime;
@property (nonatomic) BOOL showRenderFps;

- (void).cxx_destruct;
- (void)writeOutputData;
- (void)collectPPTResults;
- (void)finishedTestRunner;
- (void)finishedTestRunnerIteration;
- (id)initRenderTestWithName:(id)a0 browserController:(id)a1 showRenderTime:(BOOL)a2 showFPS:(BOOL)a3;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (void)pptResultFor:(id)a0 measure:(id)a1 time:(double)a2;
- (void)pptResultFor:(id)a0 measure:(id)a1 value:(double)a2 units:(id)a3;
- (void)startingTestRunner;

@end
