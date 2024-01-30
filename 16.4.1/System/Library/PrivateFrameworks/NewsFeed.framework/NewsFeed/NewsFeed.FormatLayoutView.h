@class NSArray;

@interface NewsFeed.FormatLayoutView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ customActions;
    void /* unknown type, empty encoding */ debugButton;
    void /* unknown type, empty encoding */ viewAnimations;
    void /* unknown type, empty encoding */ token;
    void /* unknown type, empty encoding */ isDirty;
    void /* unknown type, empty encoding */ viewContainers;
    void /* unknown type, empty encoding */ motionObservers;
    void /* unknown type, empty encoding */ scrollObservers;
    void /* unknown type, empty encoding */ loadAwareObservers;
    void /* unknown type, empty encoding */ viewControllers;
    void /* unknown type, empty encoding */ viewKey;
    void /* unknown type, empty encoding */ viewsByName;
    void /* unknown type, empty encoding */ tapAction;
    void /* unknown type, empty encoding */ tapGesture;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;

- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
