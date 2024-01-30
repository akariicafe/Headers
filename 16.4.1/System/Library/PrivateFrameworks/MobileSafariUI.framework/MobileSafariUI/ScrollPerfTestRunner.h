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
- (void)writeOutputData;
- (void)advanceGesture;
- (void)appendToFramerateHistory;
- (void)determineScrollDirection;
- (id)finalStatusForPage:(id)a0;
- (void)finishPage:(id)a0 stats:(id)a1 error:(id)a2;
- (void)finishedTestPage:(id)a0;
- (void)finishedTestRunner;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (BOOL)isPageTooShortToScroll;
- (id)machineConfigInfo;
- (id)outputDataForPage:(id)a0;
- (id)pageWebView;
- (BOOL)performActionForPage:(id)a0;
- (BOOL)startPageAction:(id)a0;
- (void)startingTestPage:(id)a0;
- (struct CGPoint { double x0; double x1; })touchPointForMoveIndex:(unsigned long long)a0;

@end
