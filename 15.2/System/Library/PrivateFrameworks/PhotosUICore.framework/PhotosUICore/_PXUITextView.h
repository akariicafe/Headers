@class UITapGestureRecognizer, UIKeyCommand, NSString;

@interface _PXUITextView : UITextView <PKScribbleInteractionDelegate, UIGestureRecognizerDelegate>

@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) UIKeyCommand *escapeKeyCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (id)keyCommands;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEditable:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleTapGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)_scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_handleEscape:(id)a0;
- (id)_linkTappedByGesture:(id)a0 charIndexAtPoint:(unsigned long long *)a1;
- (double)_distanceFromContentToGivenPoint:(struct CGPoint { double x0; double x1; })a0 charIndexAtPoint:(unsigned long long *)a1;

@end
