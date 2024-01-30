@interface AVTAvatarAttributeEditorLayoutProvider : NSObject

+ (id)actionsToEditorTransitionStartingLayoutInContainerOfSize:(struct CGSize { double x0; double x1; })a0 attributesContentViewExtraHeight:(double)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 RTL:(BOOL)a3 avatarViewStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 avatarViewAlpha:(double)a5 environment:(id)a6;
+ (id)defaultLayoutInContainerOfSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 RTL:(BOOL)a2 environment:(id)a3;
+ (BOOL)shouldShowSideGroupPickerForContainerSize:(struct CGSize { double x0; double x1; })a0 forEnvironment:(id)a1;
+ (id)editorToActionsTransitionStartingLayoutInContainerOfSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 RTL:(BOOL)a2 environment:(id)a3;

@end
