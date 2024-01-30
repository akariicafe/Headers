@class UIScrollView, NSTimer;
@protocol PUScrollViewSpeedometerDelegate;

@interface PUScrollViewSpeedometer : NSObject {
    BOOL _delegateSupportsRegimeChange;
}

@property (nonatomic, setter=_setScrollSpeed:) struct CGPoint { double x; double y; } scrollSpeed;
@property (nonatomic, setter=_setRegime:) long long regime;
@property (weak, nonatomic, setter=_setLastScrollView:) UIScrollView *_lastScrollView;
@property (nonatomic, setter=_setLastContentSize:) struct CGSize { double width; double height; } _lastContentSize;
@property (nonatomic, setter=_setLastTime:) double _lastTime;
@property (nonatomic, setter=_setLastContentOffset:) struct CGPoint { double x; double y; } _lastContentOffset;
@property (retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer;
@property (nonatomic, setter=_setNextRegime:) long long _nextRegime;
@property (nonatomic, setter=_setNextRegimeCount:) long long _nextRegimeCount;
@property (weak, nonatomic) id<PUScrollViewSpeedometerDelegate> delegate;
@property (nonatomic) double mediumUpperThreshold;
@property (nonatomic) double mediumLowerThreshold;
@property (nonatomic) double fastUpperThreshold;
@property (nonatomic) double fastLowerThreshold;

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)_rescheduleTimeout;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)_handleTimeoutTimer:(id)a0;
- (void)scrollViewWillScrollToTop:(id)a0;
- (long long)_newRegimeForScrollSpeed:(struct CGPoint { double x0; double x1; })a0;

@end
