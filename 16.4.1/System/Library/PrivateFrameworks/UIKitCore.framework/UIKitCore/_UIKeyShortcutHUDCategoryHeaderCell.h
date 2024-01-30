@class _UIKeyShortcutHUDMenu;

@interface _UIKeyShortcutHUDCategoryHeaderCell : _UIKeyShortcutHUDMenuCell

@property (weak, nonatomic) _UIKeyShortcutHUDMenu *categoryMenu;

- (void)updateConfigurationUsingState:(id)a0;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)configureWithCategory:(id)a0;
- (id)defaultContentConfiguration;

@end
