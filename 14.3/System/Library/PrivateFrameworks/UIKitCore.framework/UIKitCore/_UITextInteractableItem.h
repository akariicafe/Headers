@class UINotificationFeedbackGenerator, _UIHighlightView, UIView;
@protocol _UITextItemInteractionHandler, _UITextItemInteracting, _UITextContent;

@interface _UITextInteractableItem : NSObject {
    UINotificationFeedbackGenerator *_feedbackGenerator;
    _UIHighlightView *_highlightView;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (weak, nonatomic) id<_UITextContent> textContent;
@property (retain, nonatomic) id<_UITextItemInteractionHandler> handler;
@property (weak, nonatomic) UIView<_UITextItemInteracting> *textItemInteractingView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) unsigned long long _preferredContextMenuLayout;

+ (id)interactableAttachment:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inTextItemInteractingView:(id)a2 atLocation:(struct CGPoint { double x0; double x1; })a3;
+ (id)interactableLink:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inTextItemInteractingView:(id)a2 atLocation:(struct CGPoint { double x0; double x1; })a3;
+ (void)_removeHighlight;
+ (id)_sharedHighlightView;

- (BOOL)isLink;
- (void).cxx_destruct;
- (void)highlight;
- (void)dealloc;
- (void)unhighlight;
- (BOOL)isAttachment;
- (BOOL)isEqual:(id)a0;
- (id)contextMenuConfiguration;
- (BOOL)_allowHighlight;
- (BOOL)_allowInteraction:(long long)a0;
- (void)_warnForInvalidAction;
- (BOOL)canInvokeDefaultAction;
- (void)invokeDefaultAction;

@end
