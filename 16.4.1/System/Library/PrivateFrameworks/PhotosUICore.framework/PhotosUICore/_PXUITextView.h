@class UITapGestureRecognizer, NSString, NSMutableArray;

@interface _PXUITextView : UITextView <PKScribbleInteractionDelegate, UIGestureRecognizerDelegate> {
    NSMutableArray *_keyCommands;
}

@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)_scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFocused;
- (id)keyCommands;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_handleTapGesture:(id)a0;
- (void)addKeyCommand:(id)a0;
- (void)setEditable:(BOOL)a0;
- (double)_distanceFromContentToGivenPoint:(struct CGPoint { double x0; double x1; })a0 charIndexAtPoint:(unsigned long long *)a1;
- (id)_linkTappedByGesture:(id)a0 charIndexAtPoint:(unsigned long long *)a1;

@end
