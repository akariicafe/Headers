@class UIScrollView, _UIScrollViewFPSHUD;

@interface _UIScrollViewVFD : NSObject <_UIUpdateCompletionObserving> {
    UIScrollView *_scrollView;
    _UIScrollViewFPSHUD *_debugOverlay;
    unsigned int _activeSubreasons;
    struct _UIUpdateRequest { unsigned int flags; unsigned int minRate; unsigned int preferredRate; unsigned int maxRate; unsigned long long phase; unsigned long long load; } _updateRequest;
    struct _UIUpdateRequestRecord { struct _UIUpdateRequest *request; unsigned int reason; } _updateRecord;
    struct _UIScrollViewVFDLookupState { struct CAFrameRateRange *staticRateRangePrevious; struct CAFrameRateRange *staticRateRangeCurrent; unsigned short staticRateRangeFramesPrevious; unsigned short staticRateRangeFramesCurrent; } _lookupState;
    unsigned long long _displayedModelTime;
    struct CGPoint { double x; double y; } _displayedOrigin;
}

- (void)_updateCompletedForModelMediaTime:(double)a0 timing:(const struct _UIUpdateTiming { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
