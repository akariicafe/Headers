@class UIView, UITextItemInteractionInteraction;
@protocol UITextLinkInteraction;

@interface _UITextLinkInteractionSession : NSObject {
    UITextItemInteractionInteraction *_interaction;
    UIView<UITextLinkInteraction> *_linkInteractionView;
}

- (BOOL)_allowItemInteractions;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTextItemInteraction:(id)a0;
- (BOOL)canInteractWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)tapOnLinkWithGesture:(id)a0;

@end
