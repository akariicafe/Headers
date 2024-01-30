@interface CNPropertyGroupAlertItem : CNPropertyGroupItem

+ (id)emptyValueForLabel:(id)a0;

- (id)displayLabel;
- (id)_toneManager;
- (void)setLabeledValue:(id)a0;
- (id)displayStringForValue:(id)a0;
- (id)_vibrationManager;
- (id)replacementForInvalidValue:(id)a0;
- (BOOL)isEquivalentToItem:(id)a0 whenEditing:(BOOL)a1;
- (BOOL)canRemove;
- (id)description;
- (id)labeledValue;
- (BOOL)isValidValue:(id)a0;

@end
