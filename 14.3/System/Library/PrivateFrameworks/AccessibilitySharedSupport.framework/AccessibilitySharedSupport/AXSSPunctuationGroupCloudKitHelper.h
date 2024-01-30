@class AXDispatchTimer;

@interface AXSSPunctuationGroupCloudKitHelper : AXSSCloudKitHelper {
    AXDispatchTimer *_changeCoalescer;
}

- (id)createCKRecordFromObject:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginWatchingForChanges;
- (void)clearRecordsForPurging:(id)a0;
- (id)testRecordForSchemaCreation:(id)a0;
- (id)recordType;
- (Class)managedObjectClass;
- (id)createCKRecordFromGroup:(id)a0;
- (void)retrieveLocalChangesForCloud:(id /* block */)a0;
- (void)processServerUpdateChanges:(id)a0 moc:(id)a1 recordNameToManagedObject:(id)a2;
- (void)punctuationGroupsChanged:(id)a0;
- (id)apsEnvironment;

@end
