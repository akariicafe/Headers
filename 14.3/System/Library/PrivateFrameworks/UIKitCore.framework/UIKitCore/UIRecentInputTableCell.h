@class UILabel, UITextInputTraits, _UIFloatingContentView;

@interface UIRecentInputTableCell : UITableViewCell

@property (nonatomic) long long blurEffectStyle;
@property (retain, nonatomic) UITextInputTraits *textInputTraits;
@property (retain, nonatomic) UILabel *floatingLabel;
@property (readonly, nonatomic) _UIFloatingContentView *floatingContentView;

+ (id)focusedTextColorForBlurEffectStyle:(long long)a0;
+ (id)unfocusedTextColorForBlurEffectStyle:(long long)a0;
+ (id)backgroundColorForBlurEffectStyle:(long long)a0;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_tvIsDarkMode;
- (void)_updateAppearance;
- (void)setInputText:(id)a0 withBlurStyle:(long long)a1;

@end
