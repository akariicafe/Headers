@class PSSpecifier;

@interface PSListItemsController : PSListController {
    long long _rowToSelect;
    BOOL _deferItemSelection;
    BOOL _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
    id _retainedTarget;
}

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)didLock;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)willEnterForeground;
- (void)viewWillDisappear:(BOOL)a0;
- (void)scrollToSelectedCell;
- (id)identifierForValue:(id)a0;
- (void)setRowToSelect;
- (void)_addStaticText:(id)a0;
- (void)setValueForSpecifier:(id)a0 defaultValue:(id)a1;
- (id)itemsFromParent;
- (id)itemsFromDataSource;
- (BOOL)isRestrictionList;
- (void)setIsRestrictionList:(BOOL)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)listItemSelected:(id)a0;
- (void)dealloc;
- (void)prepareSpecifiersMetadata;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
