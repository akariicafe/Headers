@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })remoteIntrinsicContentSizeForInputViewInSet:(id)a0 includingIAV:(BOOL)a1;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)inputViewWillAppear;
- (double)inputAssistantViewHeightForInputViewSet:(id)a0;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (BOOL)showsInputViews;

@end
