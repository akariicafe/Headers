@class _UIHighlightView, NSArray, UIContextMenuInteraction, UIView, UITextRange, UINotificationFeedbackGenerator;
@protocol _UITextItemInteractionHandler, _UITextItemInteracting, _UITextContent;

@interface _UITextInteractableItem : NSObject {
    UINotificationFeedbackGenerator *_feedbackGenerator;
    _UIHighlightView *_highlightView;
}

@property (retain, nonatomic) UITextRange *range;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (weak, nonatomic) id<_UITextContent> textContent;
@property (retain, nonatomic) id<_UITextItemInteractionHandler> handler;
@property (weak, nonatomic) UIView<_UITextItemInteracting> *textItemInteractingView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) NSArray *rects;
@property (weak, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, nonatomic) unsigned long long _preferredContextMenuLayout;

+ (void)_removeHighlight;
+ (id)_sharedHighlightView;
+ (id)interactableAttachment:(id)a0 range:(id)a1 inTextItemInteractingView:(id)a2 atLocation:(struct CGPoint { double x0; double x1; })a3;
+ (id)interactableLink:(id)a0 range:(id)a1 inTextItemInteractingView:(id)a2 atLocation:(struct CGPoint { double x0; double x1; })a3;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_allowHighlight;
- (BOOL)_allowInteraction:(long long)a0;
- (void)_warnForInvalidAction;
- (BOOL)canInvokeDefaultAction;
- (id)contextMenuConfiguration;
- (void)highlight;
- (void)invokeDefaultAction;
- (BOOL)isAttachment;
- (BOOL)isLink;
- (void)unhighlight;

@end
