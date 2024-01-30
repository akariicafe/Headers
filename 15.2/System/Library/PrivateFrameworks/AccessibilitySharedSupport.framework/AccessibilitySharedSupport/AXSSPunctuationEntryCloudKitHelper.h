@class AXDispatchTimer;

@interface AXSSPunctuationEntryCloudKitHelper : AXSSCloudKitHelper {
    AXDispatchTimer *_changeCoalescer;
}

- (id)createCKRecordFromObject:(id)a0;
- (void)clearRecordsForPurging:(id)a0;
- (void)retrieveLocalChangesForCloud:(id /* block */)a0;
- (void)processServerUpdateChanges:(id)a0 moc:(id)a1 recordNameToManagedObject:(id)a2;
- (void)_processPunctuationEntryFromCKRecord:(id)a0;
- (void)punctuationGroupChanged:(id)a0;
- (id)testRecordForSchemaCreation:(id)a0;
- (void).cxx_destruct;
- (id)createCKRecordFromEntry:(id)a0;
- (void)beginWatchingForChanges;
- (id)recordType;
- (void)dealloc;
- (id)apsEnvironment;
- (Class)managedObjectClass;

@end
