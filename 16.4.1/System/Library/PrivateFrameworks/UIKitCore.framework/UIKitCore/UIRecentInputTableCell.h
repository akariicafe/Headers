@class UILabel, UITextInputTraits, _UIFloatingContentView;

@interface UIRecentInputTableCell : UITableViewCell

@property (nonatomic) long long blurEffectStyle;
@property (retain, nonatomic) UITextInputTraits *textInputTraits;
@property (retain, nonatomic) UILabel *floatingLabel;
@property (readonly, nonatomic) _UIFloatingContentView *floatingContentView;

+ (id)backgroundColorForBlurEffectStyle:(long long)a0;
+ (id)focusedTextColorForBlurEffectStyle:(long long)a0;
+ (id)unfocusedTextColorForBlurEffectStyle:(long long)a0;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_tvIsDarkMode;
- (void)_updateAppearance;
- (void)setInputText:(id)a0 withBlurStyle:(long long)a1;

@end
