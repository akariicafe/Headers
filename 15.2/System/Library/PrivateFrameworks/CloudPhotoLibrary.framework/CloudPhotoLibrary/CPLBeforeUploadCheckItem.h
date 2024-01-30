@class CPLResourceTypeSet, NSMutableDictionary, NSString, CPLScopedIdentifier, CPLBeforeUploadCheckItems, NSMutableSet, CPLRecordChange;

@interface CPLBeforeUploadCheckItem : NSObject {
    NSMutableSet *_rulesForExistenceCheck;
    NSMutableSet *_rulesForRecordFetch;
    NSMutableDictionary *_rulesForOtherRecordFetches;
    BOOL _hasCachedResultOfServerCheck;
    BOOL _recordExistsOnServer;
    CPLRecordChange *_recordOnServer;
    BOOL _checked;
    NSString *_dropReason;
    CPLResourceTypeSet *_resourcesToGenerateImageDerivatives;
    CPLResourceTypeSet *_resourcesToGenerateVideoComplementDerivatives;
    BOOL _needsToGenerateImageDerivatives;
    BOOL _needsToGenerateVideoComplementDerivatives;
}

@property (readonly, nonatomic) long long ruleGroups;
@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (readonly, nonatomic) CPLRecordChange *change;
@property (readonly, nonatomic) Class changeClass;
@property (readonly, nonatomic) BOOL isAsset;
@property (readonly, nonatomic) BOOL isTrashedOrDeletedAsset;
@property (readonly, nonatomic) BOOL needsToGenerateDerivatives;
@property (readonly, weak, nonatomic) CPLBeforeUploadCheckItems *items;
@property (readonly, nonatomic) BOOL hasRequestedRecordCheck;
@property (readonly, nonatomic) BOOL hasRequestedRecordFetch;
@property (readonly, nonatomic) unsigned long long estimatedResourceUploadSize;

- (BOOL)rejectChangeWithReason:(id)a0 error:(id *)a1;
- (BOOL)requestFullFetchForRule:(id)a0 error:(id *)a1;
- (void)dropChangeWithReason:(id)a0;
- (id)description;
- (BOOL)_forAdditionalRecordRule:(id)a0 check:(void /* function */ *)a1 error:(id *)a2;
- (BOOL)requestExistenceCheckForRule:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)checkBeforeUploadWithError:(id *)a0;
- (id)redactedDescription;
- (BOOL)_serverResourcesMatches:(id)a0;
- (BOOL)requestFullFetchOfRecordWithScopedIdentifier:(id)a0 forRule:(id)a1 error:(id *)a2;
- (BOOL)prepareWithError:(id *)a0;
- (BOOL)_forRule:(id)a0 check:(void /* function */ *)a1 error:(id *)a2;
- (void)dropResourceChangeWithReason:(id)a0;
- (id)initWithChange:(id)a0 checkItems:(id)a1;
- (BOOL)dropGeneratingDerivativesIfPossibleWithRecordOnServer:(id)a0 error:(id *)a1;

@end
