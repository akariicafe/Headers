@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ScrollPerfTestRunner : PurplePageLoadTestRunner {
    NSObject<OS_dispatch_queue> *_eventGeneratorQueue;
    long long _gestureState;
    double _gestureStartTime;
    unsigned int _scrollGestureCount;
    struct CGPoint { double x; double y; } _scrollOffsetAtGestureStart;
    long long _scrollDirection;
    int _pageIndex;
    double _startLoadTime;
    double _endLoadTime;
    double _startScrollingTime;
    double _endScrollingTime;
    double _lastFramerateTime;
    unsigned int _lastFrameCounter;
    NSMutableArray *_framerateHistory;
    NSMutableDictionary *_outputData;
}

- (void).cxx_destruct;
- (id)pageScrollView;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (BOOL)startPageAction:(id)a0;
- (id)outputDataForPage:(id)a0;
- (void)finishedTestPage:(id)a0;
- (void)writeOutputData;
- (void)finishedTestRunner;
- (BOOL)performActionForPage:(id)a0;
- (id)finalStatusForPage:(id)a0;
- (void)startingTestPage:(id)a0;
- (void)finishPage:(id)a0 stats:(id)a1 error:(id)a2;
- (id)pageWebView;
- (id)machineConfigInfo;
- (void)appendToFramerateHistory;
- (void)advanceGesture;
- (void)determineScrollDirection;
- (struct CGPoint { double x0; double x1; })touchPointForMoveIndex:(unsigned long long)a0;
- (BOOL)isPageTooShortToScroll;

@end
