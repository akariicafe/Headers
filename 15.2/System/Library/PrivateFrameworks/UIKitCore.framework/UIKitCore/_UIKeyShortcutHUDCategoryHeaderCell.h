@class _UIKeyShortcutHUDMenu;

@interface _UIKeyShortcutHUDCategoryHeaderCell : _UIKeyShortcutHUDCell

@property (weak, nonatomic) _UIKeyShortcutHUDMenu *categoryMenu;

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)updateConfigurationUsingState:(id)a0;
- (id)defaultContentConfiguration;
- (void)configureWithCategory:(id)a0;

@end
