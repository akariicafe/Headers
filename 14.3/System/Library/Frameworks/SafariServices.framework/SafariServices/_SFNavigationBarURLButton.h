@class UIVibrancyEffect, NSString, UIVisualEffectView, PKScribbleInteraction, UIView, UIGestureRecognizer, _SFNavigationBarTheme;
@protocol _SFNavigationBarURLButtonDelegate;

@interface _SFNavigationBarURLButton : UIButton <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIGestureRecognizerDelegate> {
    UIVibrancyEffect *_highlightedVibrancyEffect;
    UIVibrancyEffect *_vibrancyEffect;
    UIVisualEffectView *_effectView;
    UIView *_effectMask;
    UIGestureRecognizer *_longPressGestureRecognizer;
    PKScribbleInteraction *_pencilScribbleInteraction;
    double _backgroundAlphaFactor;
    _SFNavigationBarTheme *_theme;
    id<_SFNavigationBarURLButtonDelegate> _delegate;
    double _urlOutlineCornerRadius;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_dismissMenu:(id)a0;
- (void)copy:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)_scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_scribbleInteraction:(id)a0 didFinishWritingInElement:(id)a1;
- (void)_handleLongPress:(id)a0;
- (void)dealloc;
- (void)_hover:(id)a0;
- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (void)pasteAndNavigate:(id)a0;
- (void)_scribbleInteraction:(id)a0 willBeginWritingInElement:(id)a1;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (BOOL)canBecomeFirstResponder;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;

@end
