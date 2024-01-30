@interface WorkflowUI.DateBucketedGroup : NSObject <WFDatabaseResultObserver> {
    void /* unknown type, empty encoding */ shouldUpdate;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shortcutsResult;
    void /* unknown type, empty encoding */ dateAccessor;
    void /* unknown type, empty encoding */ emptyMessage;
}

- (id)init;
- (void).cxx_destruct;
- (void)databaseResultDidChange:(id)a0;

@end
