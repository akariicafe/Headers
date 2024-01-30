@interface ContentInteractionTestRunner : PageLoadTestRunner

@property (nonatomic) int iterations;

- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (BOOL)startPageAction:(id)a0;
- (void)startTrackingFrameRate;
- (id)pageWebView;
- (void)endTrackingFrameRate;
- (void)startSubtest:(id)a0;
- (void)stopSubtest:(id)a0;

@end
