@interface AVTAvatarAttributeEditorTransitionFromActionsStartingPortraitLayout : AVTAvatarAttributeEditorLayout {
    BOOL _showSideGroupPicker;
    double _avatarContainerAlpha;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _avatarContainerFrame;
}

@property (readonly, nonatomic) double attributesContentViewExtraHeight;

- (BOOL)showSideGroupPicker;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })attributesContentViewInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })groupDialContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sideGroupContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attributesContentViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarContainerFrame;
- (unsigned long long)supportedLayoutOrientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })userInfoFrame;
- (double)headerMaskingViewAlpha;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 screenScale:(double)a2 RTL:(BOOL)a3 avatarViewContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 attributesContentViewFrameExtraHeight:(double)a5 avatarViewAlpha:(double)a6 showSideGroupPicker:(BOOL)a7;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })headerMaskingViewFrame;
- (double)verticalRuleAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })verticalRuleFrame;
- (double)avatarContainerAlpha;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })attributesContentViewScrollIndicatorInsets;
- (id)backgroundColor;

@end
