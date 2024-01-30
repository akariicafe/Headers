@class NTPBPersonalizationProfile, NSArray, FCPersonalizationTreatment, NSError, CKRecord, FCCKPrivateDatabase;

@interface FCModifyPersonalizationOperation : FCOperation

@property (retain, nonatomic) NTPBPersonalizationProfile *savedProfile;
@property (retain, nonatomic) CKRecord *savedRecord;
@property (retain, nonatomic) NSError *resultError;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (retain, nonatomic) NSArray *changeGroups;
@property (retain, nonatomic) FCPersonalizationTreatment *treatment;
@property (retain, nonatomic) CKRecord *remoteRecord;
@property (copy, nonatomic) id /* block */ saveCompletionHandler;

+ (id)personalizationProfileFromRecord:(id)a0;
+ (void)applyChangeGroups:(id)a0 toProfile:(id)a1 treatment:(id)a2 prune:(BOOL)a3;
+ (void)pruneAggregates:(id)a0;
+ (void)applyAggregates:(id)a0 toProfile:(id)a1;
+ (void)applyDeltas:(id)a0 toProfile:(id)a1 treatment:(id)a2 prune:(BOOL)a3;

- (void)resetForRetry;
- (unsigned long long)maxRetries;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
