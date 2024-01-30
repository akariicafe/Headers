@class NSMutableDictionary;

@interface PurplePageLoadTestRunner : PageLoadTestRunner {
    NSMutableDictionary *_pptResults;
}

@property (nonatomic) BOOL showLoadTime;
@property (nonatomic) BOOL showFirstVisualLayoutTime;
@property (nonatomic) BOOL showRenderTime;
@property (nonatomic) BOOL showRenderFps;

- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (id)initRenderTestWithName:(id)a0 browserController:(id)a1 showRenderTime:(BOOL)a2 showFPS:(BOOL)a3;
- (void)finishedTestRunner;
- (void)startingTestRunner;
- (void)collectPPTResults;
- (void)pptResultFor:(id)a0 measure:(id)a1 value:(double)a2 units:(id)a3;
- (void)pptResultFor:(id)a0 measure:(id)a1 time:(double)a2;

@end
