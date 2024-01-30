@class UIFont, UIColor, NSString, UIView, UIButton;

@interface _UIFindNavigatorViewLayout : UIView

@property (retain, nonatomic) UIButton *nextResultButton;
@property (retain, nonatomic) UIButton *previousResultButton;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIButton *replaceButton;
@property (retain, nonatomic) UIView *searchTextField;
@property (retain, nonatomic) UIView *replaceTextField;
@property (nonatomic) BOOL replaceFieldVisible;
@property (nonatomic) BOOL usesAssistantBarHeight;
@property (nonatomic) long long assistantBarStyle;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly, nonatomic) UIFont *preferredTextFieldFont;
@property (readonly, nonatomic) UIColor *preferredOpaqueBackgroundColor;
@property (readonly, nonatomic) NSString *preferredMaximumContentSizeCategory;
@property (readonly, nonatomic) double preferredCornerRadius;
@property (readonly, nonatomic) double preferredThickness;
@property (readonly, nonatomic) double preferredHorizontalPadding;
@property (readonly, nonatomic) double preferredVerticalPadding;
@property (readonly, nonatomic) BOOL showsReplaceInOptionsMenu;
@property (readonly, nonatomic) BOOL shouldTransform3D;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)commonButtonConfig:(id /* block */)a0;
- (id)commonButtonConfigWithImageName:(id)a0;
- (id)commonButtonConfigWithTitle:(id)a0;
- (void)prepareForLayout;

@end
