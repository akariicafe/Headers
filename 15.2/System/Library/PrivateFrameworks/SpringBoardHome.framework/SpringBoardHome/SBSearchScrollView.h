@protocol SBSearchScrollViewDelegate;

@interface SBSearchScrollView : UIScrollView

@property (weak, nonatomic) id<SBSearchScrollViewDelegate> searchDelegate;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
