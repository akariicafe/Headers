@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)infoWithPoint:(struct CGPoint { double x0; double x1; })a0 isCompact:(BOOL)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 position:(unsigned long long)a3;

- (BOOL)showsInputOrAssistantViews;
- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (double)inputAssistantViewHeightForInputViewSet:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inputAccessoryViewPadding;
- (double)verticalOffset;
- (BOOL)showsEditItems;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (BOOL)isFloatingAssistantView;
- (BOOL)accessoryViewWillAppear;
- (BOOL)showsInputViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })remoteIntrinsicContentSizeForInputViewInSet:(id)a0 includingIAV:(BOOL)a1;
- (BOOL)inputViewWillAppear;

@end
