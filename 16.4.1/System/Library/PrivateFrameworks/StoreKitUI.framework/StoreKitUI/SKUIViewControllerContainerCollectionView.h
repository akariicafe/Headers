@interface SKUIViewControllerContainerCollectionView : UICollectionView {
    double _competingScrollViewPanGestureRecognizerHysteresis;
    BOOL _forcingIncreasedPanGestureRecognizerHysteresis;
    double _originalPanGestureRecognizerHysteresis;
    struct __CFRunLoopObserver { } *_runLoopObserver;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_beginDynamicHysteresisIncreaseWithCompetingScrollView:(id)a0;
- (void)_endDynamicHysteresisIncrease;
- (void)_updateStateForDynamicHysteresisIncrease;

@end
