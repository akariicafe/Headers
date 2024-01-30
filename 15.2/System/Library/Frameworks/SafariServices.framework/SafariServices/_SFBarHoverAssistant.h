@class NSString, UIView, _SFDynamicBarAnimator, UIHoverGestureRecognizer;
@protocol _SFBarCommon;

@interface _SFBarHoverAssistant : NSObject <_SFDynamicBarAnimatorStateObserver> {
    UIHoverGestureRecognizer *_hoverRecognizer;
    BOOL _didShowBarFromHover;
}

@property (readonly, weak, nonatomic) UIView<_SFBarCommon> *bar;
@property (readonly, weak, nonatomic) _SFDynamicBarAnimator *dynamicBarAnimator;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attachToBar:(id)a0 withAnimator:(id)a1 inContainerView:(id)a2;

- (void)dynamicBarAnimatorWillLeaveSteadyState:(id)a0;
- (void)_hover:(id)a0;
- (void).cxx_destruct;
- (void)dynamicBarAnimatorStateDidChange:(id)a0;
- (id)initWithBar:(id)a0 withAnimator:(id)a1 inContainerView:(id)a2;
- (void)dealloc;
- (BOOL)_gestureIsOverBar;

@end
