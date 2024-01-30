@class CPLChangeStorage, CPLRecordStorageView;

@interface CPLChangedRecordStorageView : CPLRecordStorageView

@property (readonly, nonatomic) CPLChangeStorage *changeStorage;
@property (readonly, nonatomic) CPLRecordStorageView *baseStorageView;

- (id)initWithChangeStorage:(id)a0 overStorageView:(id)a1;
- (id)recordViewWithScopedIdentifier:(id)a0;
- (id)description;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasRecordWithScopedIdentifier:(id)a0;
- (id)recordViewsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)resourceOfType:(unsigned long long)a0 forRecordWithScopedIdentifier:(id)a1 recordClass:(Class *)a2 error:(id *)a3;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;

@end
