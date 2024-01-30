@interface PFCloudKitMetadataPurger : NSObject

- (BOOL)purgeMetadataFromStore:(id)a0 inMonitor:(id)a1 withOptions:(unsigned long long)a2 forRecordZones:(id)a3 inDatabaseWithScope:(long long)a4 error:(id *)a5;
- (BOOL)purgeMetadataFromStore:(id)a0 inMonitor:(id)a1 withOptions:(unsigned long long)a2 forRecordZones:(id)a3 inDatabaseWithScope:(long long)a4 andTransactionAuthor:(id)a5 error:(id *)a6;
- (BOOL)purgeMetadataMatchingObjectIDs:(id)a0 inRequest:(id)a1 inStore:(id)a2 withMonitor:(id)a3 error:(id *)a4;

@end
