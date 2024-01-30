@class UIColor, NSString, UIEditMenuInteraction, UIView, UIImpactFeedbackGenerator, UILongPressGestureRecognizer;
@protocol NCTextSupporting;

@interface NCTextMenuInteraction : NSObject <UIEditMenuInteractionDelegate, UIGestureRecognizerDelegate, UIInteraction> {
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIEditMenuInteraction *_editMenuInteraction;
    UIImpactFeedbackGenerator *_haptic;
    BOOL _hapticPrepared;
    UIColor *_defaultTextColor;
}

@property (weak, nonatomic) UIView<NCTextSupporting> *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleLongPress:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_performHaptic;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_prepareHaptic;
- (void)dealloc;
- (void)willMoveToView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didMoveToView:(id)a0;
- (id)_editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_editMenuInteraction:(id)a0 targetRectForConfiguration:(id)a1;
- (void)_editMenuInteraction:(id)a0 willDismissMenuForConfiguration:(id)a1;
- (void)_editMenuInteraction:(id)a0 willPresentMenuForConfiguration:(id)a1;
- (void)_tearDownHaptic;

@end
