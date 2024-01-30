@class UITableViewCell;
@protocol HKEmergencyCardSelectionTableItemDelegate;

@interface HKEmergencyCardSelectionTableItem : HKEmergencyCardTableItem {
    UITableViewCell *_cell;
}

@property (weak, nonatomic) id<HKEmergencyCardSelectionTableItemDelegate> selectionDelegate;

- (id)title;
- (void).cxx_destruct;
- (BOOL)hasPresentableData;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndex:(long long)a1;

@end
