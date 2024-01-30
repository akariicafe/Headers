@class AXDispatchTimer;

@interface AXSSPunctuationGroupCloudKitHelper : AXSSCloudKitHelper {
    AXDispatchTimer *_changeCoalescer;
}

- (id)apsEnvironment;
- (void)dealloc;
- (void).cxx_destruct;
- (id)recordType;
- (Class)managedObjectClass;
- (void)beginWatchingForChanges;
- (void)clearRecordsForPurging:(id)a0;
- (id)createCKRecordFromGroup:(id)a0;
- (id)createCKRecordFromObject:(id)a0;
- (void)processRecordDeletionsFromServer:(id)a0;
- (void)processServerUpdateChanges:(id)a0 moc:(id)a1 recordNameToManagedObject:(id)a2;
- (void)punctuationGroupsChanged:(id)a0;
- (void)retrieveLocalChangesForCloud:(id /* block */)a0;
- (id)testRecordForSchemaCreation:(id)a0;

@end
