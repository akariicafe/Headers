@class CPLChangeBatch, NSString, NSArray, NSDictionary, NSMutableSet, NSMutableDictionary;
@protocol CPLBeforeUploadCheckItemsProvider;

@interface CPLBeforeUploadCheckItems : NSObject {
    NSDictionary *_items;
    NSDictionary *_foundRecords;
    NSMutableSet *_recordsToFetch;
    NSMutableDictionary *_recordsNeedingToGenerateDerivatives;
    NSMutableDictionary *_nonAssetsWithResourcesToUpload;
    NSMutableDictionary *_assetsWithResourcesToUpload;
    NSMutableSet *_trashedOrDeletedAssets;
    NSMutableDictionary *_additionalRecords;
    NSMutableSet *_fetchRules;
}

@property (readonly, nonatomic) CPLChangeBatch *originalBatch;
@property (readonly, nonatomic) id<CPLBeforeUploadCheckItemsProvider> provider;
@property (readonly, nonatomic) long long ruleGroups;
@property (copy, nonatomic) NSString *sharingScopeIdentifier;
@property (readonly, nonatomic) NSArray *recordsToFetch;
@property (readonly, nonatomic) NSArray *fetchRules;
@property (readonly, nonatomic) NSArray *recordsNeedingGeneratedDerivatives;
@property (readonly, nonatomic) CPLChangeBatch *batchToUpload;
@property (readonly, nonatomic) BOOL shouldResetExceedingQuotaOnSuccessfulUpload;
@property (readonly, nonatomic) unsigned long long countOfAssetsWithResourcesToUpload;
@property (readonly, nonatomic) unsigned long long estimatedUploadResourceSize;
@property (readonly, nonatomic) BOOL willUploadSomeResources;
@property (readonly, nonatomic) BOOL hasDroppedSomeResources;

- (void).cxx_destruct;
- (void)addAdditionalRecordWithScopedIdentifierToUploadBatch:(id)a0;
- (BOOL)checkBatchWithFoundRecords:(id)a0 error:(id *)a1;
- (id)initWithBatch:(id)a0 ruleGroups:(long long)a1 provider:(id)a2;
- (void)itemWillDropResourceChange:(id)a0;
- (BOOL)prepareBatchBeforeUploadWithError:(id *)a0;
- (id)recordFromTransportWithScopedIdentifier:(id)a0;
- (BOOL)requestFetchOfRecordWithScopedIdentifier:(id)a0 forItem:(id)a1 rule:(id)a2 error:(id *)a3;
- (BOOL)transportHasRecordWithScopedIdentifier:(id)a0;
- (id)willUploadCloudResource:(id)a0 localResource:(id)a1 forItem:(id)a2 error:(id *)a3;

@end
