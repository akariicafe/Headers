@class UITableViewCell;
@protocol HKEmergencyCardDeletionDelegate;

@interface HKEmergencyCardDeletionTableItem : HKEmergencyCardTableItem {
    UITableViewCell *_cell;
}

@property (weak, nonatomic) id<HKEmergencyCardDeletionDelegate> deletionDelegate;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (id)title;
- (void).cxx_destruct;
- (id)initInEditMode:(BOOL)a0;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndex:(long long)a1;

@end
