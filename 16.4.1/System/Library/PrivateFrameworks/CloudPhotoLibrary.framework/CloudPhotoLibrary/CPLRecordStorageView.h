@interface CPLRecordStorageView : NSObject

- (BOOL)hasRecordWithScopedIdentifier:(id)a0;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)a0;
- (id)resourceOfType:(unsigned long long)a0 forRecordWithScopedIdentifier:(id)a1 recordClass:(Class *)a2 error:(id *)a3;
- (id)recordViewWithScopedIdentifier:(id)a0;
- (id)recordViewsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)compactedBatchFromExpandedBatch:(id)a0;
- (id)localChangeBatchFromCloudBatch:(id)a0 usingMapping:(id)a1 withError:(id *)a2;
- (id)resourceOfType:(unsigned long long)a0 forRecordWithScopedIdentifier:(id)a1 record:(id *)a2 error:(id *)a3;

@end
