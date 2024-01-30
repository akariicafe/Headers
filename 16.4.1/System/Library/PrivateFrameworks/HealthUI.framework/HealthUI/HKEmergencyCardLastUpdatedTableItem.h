@interface HKEmergencyCardLastUpdatedTableItem : HKEmergencyCardTableItem {
    BOOL _editable;
}

- (BOOL)hasPresentableData;
- (id)initInEditMode:(BOOL)a0 editable:(BOOL)a1;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;

@end
