@interface HKEmergencyCardLastUpdatedTableItem : HKEmergencyCardTableItem {
    BOOL _editable;
}

- (BOOL)hasPresentableData;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (id)initInEditMode:(BOOL)a0 editable:(BOOL)a1;

@end
