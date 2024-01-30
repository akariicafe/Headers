@class AXDispatchTimer;

@interface AXSSPunctuationEntryCloudKitHelper : AXSSCloudKitHelper {
    AXDispatchTimer *_changeCoalescer;
}

- (id)createCKRecordFromObject:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginWatchingForChanges;
- (void)clearRecordsForPurging:(id)a0;
- (id)testRecordForSchemaCreation:(id)a0;
- (id)recordType;
- (id)createCKRecordFromEntry:(id)a0;
- (Class)managedObjectClass;
- (void)retrieveLocalChangesForCloud:(id /* block */)a0;
- (void)processServerUpdateChanges:(id)a0 moc:(id)a1 recordNameToManagedObject:(id)a2;
- (id)apsEnvironment;
- (void)_processPunctuationEntryFromCKRecord:(id)a0;
- (void)punctuationGroupChanged:(id)a0;

@end
