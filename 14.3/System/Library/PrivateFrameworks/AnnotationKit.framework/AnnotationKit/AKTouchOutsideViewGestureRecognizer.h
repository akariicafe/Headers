@class NSString, NSMutableSet, UIView;

@interface AKTouchOutsideViewGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    NSMutableSet *mTargets;
}

@property (weak, nonatomic) UIView *watchView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1 watchView:(id)a2;

@end
