@class NSMutableArray, UIScrollEvent;

@interface _UIScrollViewAsyncScrollDecelerationState : NSObject {
    double _lastUpdateTime;
    UIScrollEvent *_scrollEvent;
    struct CGVector { double dx; double dy; } _velocity;
    NSMutableArray *_enqueuedCompletionResults;
    BOOL _deliveredFinishedDecelerating;
}

- (void).cxx_destruct;

@end
