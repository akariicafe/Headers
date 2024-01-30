@class UIResponder, UIWindow, UIView;

@interface UINavigationTransitionView : UIView <NSCoding> {
    UIView *_toView;
    long long _transition;
    UIResponder *_firstResponderToRestore;
    UIWindow *_originalWindow;
    double _fromViewAlpha;
    unsigned char _isTransitioning : 1;
    unsigned char _popoverWillCleanUpNavigationTransition : 1;
    unsigned char _usesRoundedCorners : 1;
}

@property (weak, nonatomic) id delegate;
@property (readonly) UIView *fromView;
@property (nonatomic) BOOL usesRoundedCorners;
@property (readonly) BOOL isTransitioning;
@property (nonatomic) BOOL popoverWillCleanUpNavigationTransition;

+ (double)defaultDurationForTransition:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_prefersFocusContainment;
- (BOOL)transition:(long long)a0 fromView:(id)a1 toView:(id)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)_isTransitioningFromView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)transition:(long long)a0 toView:(id)a1;
- (void)dealloc;
- (void)_notifyDelegateTransitionDidStopWithContext:(id)a0;
- (void)_cleanupTransitionFromPopover;
- (void)_navigationTransitionDidStop;
- (void)_cleanupTransition;
- (void).cxx_destruct;

@end
