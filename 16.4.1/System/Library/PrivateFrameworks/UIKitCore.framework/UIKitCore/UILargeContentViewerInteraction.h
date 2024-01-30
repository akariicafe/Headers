@class NSString, UIView, UIGestureRecognizer;
@protocol UILargeContentViewerInteractionDelegate;

@interface UILargeContentViewerInteraction : NSObject <UIAccessibilityHUDGestureDelegateInternal, UIInteraction> {
    UIView *_view;
}

@property (class, readonly, nonatomic, getter=isEnabled) BOOL enabled;

@property (readonly, weak, nonatomic) id<UILargeContentViewerInteractionDelegate> delegate;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

+ (void)initialize;

- (id)_viewControllerForAccessibilityHUDGestureManager:(id)a0;
- (BOOL)_accessibilityHUDGestureManager:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)willMoveToView:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)_accessibilityHUDGestureManager:(id)a0 HUDItemForPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)init;
- (id)_itemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_accessibilityHUDGestureManager:(id)a0 gestureLiftedAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)didMoveToView:(id)a0;

@end
