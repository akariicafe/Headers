@class HKMedicalIDPersonSummaryCell;

@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem {
    HKMedicalIDPersonSummaryCell *_cell;
}

- (id)_cell;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (void)localeDidChange:(id)a0;
- (void)setData:(id)a0;
- (void).cxx_destruct;
- (id)initInEditMode:(BOOL)a0;
- (void)timeZoneDidChange:(id)a0;
- (BOOL)hasPresentableData;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;

@end
