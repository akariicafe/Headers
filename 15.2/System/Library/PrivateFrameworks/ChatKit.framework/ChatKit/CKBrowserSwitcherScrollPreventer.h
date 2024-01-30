@class NSString, UIScrollView, UIView, UILongPressGestureRecognizer;
@protocol CKBrowserSwitcherScrollPreventerDelegate;

@interface CKBrowserSwitcherScrollPreventer : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {
    UILongPressGestureRecognizer *_touchTracker;
}

@property (retain, nonatomic) UIScrollView *horizontalScrollView;
@property (retain, nonatomic) UIView *horizontalScrollPreventerView;
@property (nonatomic, getter=isEngaged) BOOL engaged;
@property (nonatomic, getter=isSwitching) BOOL switching;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (weak, nonatomic) id<CKBrowserSwitcherScrollPreventerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)touchTrackerRecognized:(id)a0;

@end
