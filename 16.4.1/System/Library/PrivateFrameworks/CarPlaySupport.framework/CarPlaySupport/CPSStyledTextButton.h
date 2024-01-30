@class UIFont;

@interface CPSStyledTextButton : CPSButton

@property (retain, nonatomic) UIFont *fontOverride;

+ (id)buttonWithTextButton:(id)a0;

- (BOOL)canBecomeFocused;
- (id)_externalUnfocusedBorderColor;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_buttonFont;

@end
