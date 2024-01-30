@class NSDictionary, NSArray, FCPersonalizationTreatment;
@protocol FCReadonlyPersonalizationAggregateStore;

@interface NTPersonalizationFeatureCTRLookupOperation : FCOperation

@property (copy, nonatomic) NSDictionary *result;
@property (retain, nonatomic) id<FCReadonlyPersonalizationAggregateStore> aggregateStore;
@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (copy, nonatomic) NSArray *lookupRequests;
@property (copy, nonatomic) id /* block */ lookupCompletion;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (id)init;
- (void).cxx_destruct;

@end
