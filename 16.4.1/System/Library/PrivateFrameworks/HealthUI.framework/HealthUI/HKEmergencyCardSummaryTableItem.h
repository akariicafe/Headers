@class HKMedicalIDPersonSummaryCell;

@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem {
    HKMedicalIDPersonSummaryCell *_cell;
}

- (void)setData:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (void)localeDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_cell;
- (id)initInEditMode:(BOOL)a0;
- (BOOL)hasPresentableData;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (void)timeZoneDidChange:(id)a0;

@end
