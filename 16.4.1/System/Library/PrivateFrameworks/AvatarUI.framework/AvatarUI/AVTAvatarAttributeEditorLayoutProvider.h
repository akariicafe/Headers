@interface AVTAvatarAttributeEditorLayoutProvider : NSObject

+ (id)actionsToEditorTransitionStartingLayoutInContainerOfSize:(struct CGSize { double x0; double x1; })a0 attributesContentViewExtraHeight:(double)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 userInfoViewHeight:(double)a3 RTL:(BOOL)a4 avatarViewStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 avatarViewAlpha:(double)a6 environment:(id)a7;
+ (id)defaultLayoutInContainerOfSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 userInfoViewHeight:(double)a2 RTL:(BOOL)a3 environment:(id)a4;
+ (id)defaultLayoutInContainerOfSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 userInfoViewHeight:(double)a2 RTL:(BOOL)a3 environment:(id)a4 maxGroupLabelWidth:(double)a5;
+ (id)editorToActionsTransitionStartingLayoutInContainerOfSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 userInfoViewHeight:(double)a2 RTL:(BOOL)a3 environment:(id)a4;
+ (BOOL)shouldShowSideGroupPickerForContainerSize:(struct CGSize { double x0; double x1; })a0 forEnvironment:(id)a1;

@end
