@class UIScrollView, NSString, UIAutoscroll;

@interface _UIActivityDragGestureRecognizer : UILongPressGestureRecognizer <UIAutoscrollDelegate, _UIScrollViewScrollObserver>

@property (retain, nonatomic) UIScrollView *targetScrollView;
@property (retain, nonatomic) UIAutoscroll *autoscroll;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } draggingInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelAutoscroll;
- (void)updateAutoscroll:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)_observeScrollViewDidScroll:(id)a0;
- (void)reset;
- (void)autoscrollWillNotStart;
- (int)autoscrollDirectionsForPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)beginAutoscrollAndUpdateDirectionIfNeeded;

@end
