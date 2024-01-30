@class CADisplayLink;

@interface ZoomTestProcessor : ContentInteractionTestRunner

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) int iterationsRemaining;
@property (nonatomic) long long testState;
@property (nonatomic) BOOL didFirstZoomStep;
@property (nonatomic) BOOL zoomingIn;
@property (nonatomic) int stepsPerZoom;

- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (BOOL)startPageAction:(id)a0;
- (BOOL)performActionForPage:(id)a0;
- (BOOL)updateWithNewScale;
- (void)zoomTestStep;
- (void)startZoomingTest;

@end
