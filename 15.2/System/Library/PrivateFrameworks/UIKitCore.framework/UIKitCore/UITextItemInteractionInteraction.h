@interface UITextItemInteractionInteraction : UITextInteraction

+ (BOOL)mightResponderHaveTextItemInteractions:(id)a0;
+ (BOOL)mightResponder:(id)a0 haveInteractableTextItemAtPoint:(struct CGPoint { double x0; double x1; })a1 precision:(unsigned long long)a2;

- (BOOL)_allowItemInteractions;
- (id)_contextMenuInteraction;

@end
