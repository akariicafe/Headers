@class CPLChangeBatch, NSArray, NSMutableSet, NSDictionary, NSMutableDictionary;
@protocol CPLBeforeUploadCheckItemsProvider;

@interface CPLBeforeUploadCheckItems : NSObject {
    NSDictionary *_items;
    NSDictionary *_foundRecords;
    NSMutableDictionary *_recordsToCheck;
    NSMutableDictionary *_recordsNeedingToGenerateDerivatives;
    NSMutableDictionary *_nonAssetsWithResourcesToUpload;
    NSMutableDictionary *_assetsWithResourcesToUpload;
    NSMutableSet *_trashedOrDeletedAssets;
}

@property (readonly, nonatomic) CPLChangeBatch *originalBatch;
@property (readonly, nonatomic) id<CPLBeforeUploadCheckItemsProvider> provider;
@property (readonly, nonatomic) long long ruleGroups;
@property (readonly, nonatomic) NSArray *recordsToCheck;
@property (readonly, nonatomic) NSMutableSet *recordsToFullyFetch;
@property (readonly, nonatomic) NSArray *recordsNeedingGeneratedDerivatives;
@property (readonly, nonatomic) CPLChangeBatch *batchToUpload;
@property (readonly, nonatomic) BOOL shouldResetExceedingQuotaOnSuccessfulUpload;
@property (readonly, nonatomic) unsigned long long countOfAssetsWithResourcesToUpload;
@property (readonly, nonatomic) unsigned long long estimatedUploadResourceSize;
@property (readonly, nonatomic) BOOL willUploadSomeResources;
@property (readonly, nonatomic) BOOL hasDroppedSomeResources;

- (BOOL)requestFullFetchOfRecordWithScopedIdentifier:(id)a0 forItem:(id)a1 error:(id *)a2;
- (id)willUploadCloudResource:(id)a0 localResource:(id)a1 forItem:(id)a2 error:(id *)a3;
- (id)recordFromTransportWithScopedIdentifier:(id)a0;
- (BOOL)requestExistenceCheckForRecord:(id)a0 forItem:(id)a1 error:(id *)a2;
- (BOOL)transportHasRecordWithScopedIdentifier:(id)a0;
- (void)itemWillDropResourceChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)checkBatchWithFoundRecords:(id)a0 error:(id *)a1;
- (BOOL)prepareBatchBeforeUploadWithError:(id *)a0;
- (BOOL)requestFullFetchOfRecord:(id)a0 forItem:(id)a1 error:(id *)a2;
- (id)initWithBatch:(id)a0 ruleGroups:(long long)a1 provider:(id)a2;

@end
