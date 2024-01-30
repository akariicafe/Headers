@class NSString, MPSwipeGestureRecognizer, MPActivityGestureRecognizer, MPTapGestureRecognizer, UIPinchGestureRecognizer;
@protocol MPSwipableViewDelegate;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate> {
    MPTapGestureRecognizer *_tapGestureRecognizer;
    MPSwipeGestureRecognizer *_swipeGestureRecognizer;
    MPActivityGestureRecognizer *_activityGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
}

@property (nonatomic) long long enabledGestureTypes;
@property (nonatomic) long long simultaneousGestureTypes;
@property (weak, nonatomic) id<MPSwipableViewDelegate> swipeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGestureRecognizer:(id)a0;
- (void)removeGestureRecognizer:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)_tapGestureRecognized:(id)a0;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_swipeGestureRecognized:(id)a0;
- (void)_activityGestureRecognized:(id)a0;
- (void)_pinchGestureRecognized:(id)a0;
- (void)_updateGestureRecognizersForEnabledTypes;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
