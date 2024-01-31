@class NSString, TCArtraceSession, CCUIContentModuleContext, NSArray, PTTraceSession;

@interface CCUIPerformanceTraceModuleViewController : CCUIButtonModuleViewController <TCArtraceSessionDelegate, PTTraceSessionDelegate> {
    unsigned long long state;
    TCArtraceSession *_traceSession;
    NSArray *_traceStartScenes;
    PTTraceSession *_performanceTraceSession;
}

@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateState:(int)a0;
- (double)preferredExpandedContentHeight;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)_startRecording;
- (void)_stopRecording;
- (void)performanceTraceDidComplete:(id)a0 withToken:(id)a1 withError:(id)a2;
- (void)performanceTraceDidStart:(id)a0;
- (id)_getFGSceneIdentifiers;
- (void)artraceSession:(id)a0 didReceiveOutput:(id)a1;
- (void)artraceSessionDidComplete:(id)a0;

@end
