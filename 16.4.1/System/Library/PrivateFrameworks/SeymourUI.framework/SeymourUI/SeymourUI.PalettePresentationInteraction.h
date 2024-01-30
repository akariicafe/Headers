@interface SeymourUI.PalettePresentationInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction, UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ presentedViewController;
    void /* unknown type, empty encoding */ panGestureRecognizer;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ view;

- (void)willMoveToView:(id)a0;
- (void)didMoveToView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)tapGestureRecognized:(id)a0;
- (void)panGestureRecognized:(id)a0;

@end
