@interface CNPropertyGroupAlertItem : CNPropertyGroupItem

+ (id)emptyValueForLabel:(id)a0;

- (BOOL)isValidValue:(id)a0;
- (id)description;
- (BOOL)canRemove;
- (id)_toneManager;
- (void)setLabeledValue:(id)a0;
- (id)displayStringForValue:(id)a0;
- (id)replacementForInvalidValue:(id)a0;
- (BOOL)isEquivalentToItem:(id)a0 whenEditing:(BOOL)a1;
- (id)_vibrationManager;
- (id)displayLabel;
- (id)labeledValue;

@end
