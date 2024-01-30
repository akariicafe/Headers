@class NSArray, NSString, NSMutableArray;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem {
    NSMutableArray *_cumulativeRowOffsets;
    NSArray *_allSubItems;
}

@property (retain, nonatomic) NSArray *subitems;
@property (retain, nonatomic) NSString *titleForHeader;

- (long long)numberOfRows;
- (void)setData:(id)a0;
- (void)setOwningViewController:(id)a0;
- (void).cxx_destruct;
- (void)commitEditing;
- (void)setProfileFirstName:(id)a0;
- (BOOL)hasPresentableData;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndex:(long long)a1;
- (void)_getSubitem:(id *)a0 andSubitemRow:(long long *)a1 forTableViewRow:(long long)a2;
- (BOOL)canEditRowAtIndex:(long long)a0;
- (long long)editingStyleForRowAtIndex:(long long)a0;
- (long long)commitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (void)didCommitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;

@end
