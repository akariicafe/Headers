@class SKUIContextActionsViewController, UILongPressGestureRecognizer, NSTimer, UIPreviewInteraction, UIViewPropertyAnimator, NSString, UIViewController;

@interface SKUIContextActionsPresentationRegistration : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate>

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIPreviewInteraction *previewInteraction;
@property (nonatomic) BOOL previewInteractionDidEnd;
@property (retain, nonatomic) NSTimer *previewInteractionTimeout;
@property (retain, nonatomic) SKUIContextActionsViewController *orbContextActionsViewController;
@property (retain, nonatomic) UIViewPropertyAnimator *previewPhasePropertyAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *commitPhasePropertyAnimator;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)previewInteraction:(id)a0 didUpdatePreviewTransition:(double)a1 ended:(BOOL)a2;
- (void)previewInteractionDidCancel:(id)a0;
- (BOOL)previewInteractionShouldBegin:(id)a0;
- (id)initWithViewController:(id)a0 handler:(id /* block */)a1;
- (void)_presentFromGestureRecognizer:(id)a0;
- (void)cleanupPreviewInteraction:(id)a0;
- (void)longPressGestureRecognizerTriggered:(id)a0;

@end
