@class UITapGestureRecognizer, UILongPressGestureRecognizer, _UITextInteractableItem;

@interface _UITextSimpleLinkInteraction : UITextItemInteractionInteraction {
    UITapGestureRecognizer *_linkTap;
    UILongPressGestureRecognizer *_highlighter;
    _UITextInteractableItem *_highlightedItem;
}

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint { double x0; double x1; })a0 asTap:(BOOL)a1 precision:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (id)itemInteractableView;
- (void)linkTapped:(id)a0;
- (id)gesturesForFailureRequirements;
- (BOOL)_allowItemInteractions;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)a0;
- (void)highlight:(id)a0;
- (BOOL)interaction_gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)textLinkInteractableView;
- (BOOL)_beginInteractionSessionForLinkAtPoint:(struct CGPoint { double x0; double x1; })a0 asTap:(BOOL)a1 precision:(unsigned long long)a2;

@end
