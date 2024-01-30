@class UIView, UITextItemInteractionInteraction;
@protocol UITextLinkInteraction;

@interface _UITextLinkInteractionSession : NSObject {
    UITextItemInteractionInteraction *_interaction;
    UIView<UITextLinkInteraction> *_linkInteractionView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_allowItemInteractions;
- (BOOL)canInteractWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithTextItemInteraction:(id)a0;
- (BOOL)tapOnLinkWithGesture:(id)a0;

@end
