@class UILabel, UITextInputTraits, _UIFloatingContentView;

@interface UIRecentInputTableCell : UITableViewCell

@property (nonatomic) long long blurEffectStyle;
@property (retain, nonatomic) UITextInputTraits *textInputTraits;
@property (retain, nonatomic) UILabel *floatingLabel;
@property (readonly, nonatomic) _UIFloatingContentView *floatingContentView;

+ (id)focusedTextColorForBlurEffectStyle:(long long)a0;
+ (id)unfocusedTextColorForBlurEffectStyle:(long long)a0;
+ (id)backgroundColorForBlurEffectStyle:(long long)a0;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)traitCollectionDidChange:(id)a0;
- (void)setInputText:(id)a0 withBlurStyle:(long long)a1;
- (BOOL)_tvIsDarkMode;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
