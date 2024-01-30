@class NSString, CCUIContentModuleContext, UIViewPropertyAnimator, TCArtraceSession, NSArray, PTTraceSession;

@interface CCUIPerformanceTraceModuleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController, TCArtraceSessionDelegate, PTTraceSessionDelegate> {
    unsigned long long state;
    TCArtraceSession *_traceSession;
    NSArray *_traceStartScenes;
    PTTraceSession *_performanceTraceSession;
}

@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)_updateState:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_stopRecording;
- (void)_startRecording;
- (void)performanceTraceDidStart:(id)a0;
- (void)performanceTraceDidComplete:(id)a0 withToken:(id)a1 withError:(id)a2;
- (id)_getFGSceneIdentifiers;
- (void)artraceSession:(id)a0 didReceiveOutput:(id)a1;
- (void)artraceSessionDidComplete:(id)a0;

@end
