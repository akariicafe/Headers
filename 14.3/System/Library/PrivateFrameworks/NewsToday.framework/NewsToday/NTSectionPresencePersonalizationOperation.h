@class NSDictionary, NSArray, FCPersonalizationTreatment;
@protocol FCReadonlyPersonalizationAggregateStore;

@interface NTSectionPresencePersonalizationOperation : FCOperation

@property (copy, nonatomic) NSDictionary *result;
@property (retain, nonatomic) id<FCReadonlyPersonalizationAggregateStore> aggregateStore;
@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (copy, nonatomic) NSArray *absoluteRequests;
@property (copy, nonatomic) NSArray *relativeRequests;
@property (copy, nonatomic) id /* block */ personalizationCompletion;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
