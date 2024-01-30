@class UIFont;

@interface CPSStyledTextButton : CPSButton

@property (retain, nonatomic) UIFont *fontOverride;

+ (id)buttonWithTextButton:(id)a0;

- (void).cxx_destruct;
- (id)_externalUnfocusedBorderColor;
- (id)_buttonFont;
- (void)traitCollectionDidChange:(id)a0;

@end
