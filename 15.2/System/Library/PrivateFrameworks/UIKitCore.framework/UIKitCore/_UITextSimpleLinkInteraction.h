@class UITapGestureRecognizer, UILongPressGestureRecognizer, _UITextInteractableItem;

@interface _UITextSimpleLinkInteraction : UITextItemInteractionInteraction {
    UITapGestureRecognizer *_linkTap;
    UILongPressGestureRecognizer *_highlighter;
    _UITextInteractableItem *_highlightedItem;
    BOOL _presentingFromSimpleTap;
}

- (id)gesturesForFailureRequirements;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint { double x0; double x1; })a0 asTap:(BOOL)a1 precision:(unsigned long long)a2;
- (BOOL)_allowItemInteractions;
- (id)itemInteractableView;
- (void).cxx_destruct;
- (id)init;
- (BOOL)interaction_gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)textLinkInteractableView;
- (void)highlight:(id)a0;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)a0;
- (void)linkTapped:(id)a0;
- (BOOL)_beginInteractionSessionForLinkAtPoint:(struct CGPoint { double x0; double x1; })a0 asTap:(BOOL)a1 precision:(unsigned long long)a2;

@end
