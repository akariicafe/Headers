@interface WorkflowUI.LibraryDataSource : _TtCs12_SwiftObject <WFDatabaseResultObserver> {
    void /* unknown type, empty encoding */ observedResults;
    void /* unknown type, empty encoding */ shouldReload;
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ libraryDelegate;
    void /* unknown type, empty encoding */ searchPredicate;
    void /* unknown type, empty encoding */ _selectedWorkflowIds;
    void /* unknown type, empty encoding */ canChangeLayoutModes;
    void /* unknown type, empty encoding */ _layoutMode;
    void /* unknown type, empty encoding */ _isEditing;
    void /* unknown type, empty encoding */ shortcutMoveService;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ _sortedSections;
    void /* unknown type, empty encoding */ sortOrderComparators;
    void /* unknown type, empty encoding */ onSortComparatorChanged;
    void /* unknown type, empty encoding */ observeChanges;
}

- (void)databaseResultDidChange:(id)a0;

@end
