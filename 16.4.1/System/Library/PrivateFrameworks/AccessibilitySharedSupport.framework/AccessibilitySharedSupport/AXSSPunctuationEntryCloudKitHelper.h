@class AXDispatchTimer;

@interface AXSSPunctuationEntryCloudKitHelper : AXSSCloudKitHelper {
    AXDispatchTimer *_changeCoalescer;
}

- (id)apsEnvironment;
- (void)dealloc;
- (void).cxx_destruct;
- (id)recordType;
- (Class)managedObjectClass;
- (void)_processPunctuationEntryFromCKRecord:(id)a0;
- (void)beginWatchingForChanges;
- (void)clearRecordsForPurging:(id)a0;
- (id)createCKRecordFromEntry:(id)a0;
- (id)createCKRecordFromObject:(id)a0;
- (void)processRecordDeletionsFromServer:(id)a0;
- (void)processServerUpdateChanges:(id)a0 moc:(id)a1 recordNameToManagedObject:(id)a2;
- (void)punctuationGroupChanged:(id)a0;
- (void)retrieveLocalChangesForCloud:(id /* block */)a0;
- (id)testRecordForSchemaCreation:(id)a0;

@end
