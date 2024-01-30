@class UIFont;

@interface CPSStyledTextButton : CPSButton

@property (retain, nonatomic) UIFont *fontOverride;

+ (id)buttonWithTextButton:(id)a0;

- (id)_externalUnfocusedBorderColor;
- (BOOL)canBecomeFocused;
- (id)_buttonFont;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
