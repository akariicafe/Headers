@class NTPBPersonalizationProfile, FCPersonalizationTreatment, NSDictionary, NSError, CKRecord, FCCKPrivateDatabase;

@interface FCModifyPersonalizationOperation : FCOperation

@property (retain, nonatomic) NTPBPersonalizationProfile *savedProfile;
@property (retain, nonatomic) CKRecord *savedRecord;
@property (retain, nonatomic) NSError *resultError;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (retain, nonatomic) NSDictionary *aggregates;
@property (retain, nonatomic) FCPersonalizationTreatment *treatment;
@property (retain, nonatomic) CKRecord *remoteRecord;
@property (copy, nonatomic) id /* block */ saveCompletionHandler;

+ (void)applyChangeGroups:(id)a0 toProfile:(id)a1 treatment:(id)a2 prune:(BOOL)a3;
+ (id)personalizationProfileFromRecord:(id)a0;
+ (void)applyAggregates:(id)a0 toProfile:(id)a1 maxRatio:(double)a2;
+ (void)pruneAggregates:(id)a0;
+ (void)applyDeltas:(id)a0 toProfile:(id)a1 treatment:(id)a2 prune:(BOOL)a3;

- (void)performOperation;
- (BOOL)validateOperation;
- (unsigned long long)maxRetries;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)resetForRetry;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
