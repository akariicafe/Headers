@interface AXColorPickerCell : PSControlTableCell

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)canReload;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setValue:(id)a0;
- (id)accessibilityValue;
- (id)controlValue;
- (id)newControl;
- (void)reloadWithSpecifier:(id)a0 animated:(BOOL)a1;
- (id)_colorValue;

@end
