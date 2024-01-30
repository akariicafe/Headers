@class PSSpecifier;

@interface PSListItemsController : PSListController {
    long long _rowToSelect;
    BOOL _deferItemSelection;
    BOOL _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
    id _retainedTarget;
}

- (void)didLock;
- (void)prepareSpecifiersMetadata;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setRowToSelect;
- (void)scrollToSelectedCell;
- (void)setValueForSpecifier:(id)a0 defaultValue:(id)a1;
- (void)listItemSelected:(id)a0;
- (void)_addStaticText:(id)a0;
- (id)itemsFromParent;
- (id)itemsFromDataSource;
- (BOOL)isRestrictionList;
- (void)setIsRestrictionList:(BOOL)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)willEnterForeground;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)suspend;
- (void)viewDidLoad;

@end
