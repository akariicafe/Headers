@class HKMedicalIDEditorSwitchCell, UITableView;

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorSwitchDelegate> {
    HKMedicalIDEditorSwitchCell *_cell;
}

@property (weak, nonatomic) UITableView *tableView;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (void).cxx_destruct;
- (id)initInEditMode:(BOOL)a0;
- (id)titleForHeader;
- (id)titleForFooter;
- (BOOL)hasPresentableData;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (void)switchWasChanged:(BOOL)a0;
- (id)_editCell;
- (id)_viewCellForTableView:(id)a0;
- (id)footerTextViewString;

@end
