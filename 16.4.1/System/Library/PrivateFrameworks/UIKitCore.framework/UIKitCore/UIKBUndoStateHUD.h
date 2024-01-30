@class UIKBUndoStyling, UIVisualEffectView, UILabel, UIView, NSLayoutConstraint;

@interface UIKBUndoStateHUD : UIView

@property (retain, nonatomic) UIVisualEffectView *shadowView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *labelView;
@property (retain, nonatomic) UIKBUndoStyling *style;
@property (nonatomic) long long controlType;
@property (retain, nonatomic) NSLayoutConstraint *undoStateHUDWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *undoStateHUDHeightConstraint;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyboardAppearance:(long long)a0;
- (void)updateUndoStateHUDControlType:(long long)a0 available:(BOOL)a1;

@end
