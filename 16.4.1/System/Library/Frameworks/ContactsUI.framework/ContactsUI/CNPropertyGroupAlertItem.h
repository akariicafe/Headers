@interface CNPropertyGroupAlertItem : CNPropertyGroupItem

+ (id)emptyValueForLabel:(id)a0;

- (id)displayLabel;
- (BOOL)isValidValue:(id)a0;
- (id)description;
- (id)labeledValue;
- (BOOL)isEquivalentToItem:(id)a0 whenEditing:(BOOL)a1;
- (id)_toneManager;
- (id)_vibrationManager;
- (BOOL)canRemove;
- (id)displayStringForValue:(id)a0;
- (id)replacementForInvalidValue:(id)a0;
- (void)setLabeledValue:(id)a0;

@end
