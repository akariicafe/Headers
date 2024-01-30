@class NSArray, NSString, NSCondition, NSMutableArray, PSGInputSuggester;

@interface _ICInputSuggesterPredictionSource : NSObject <_ICPredictionSourcing, _ICFeedbackAccepting> {
    NSCondition *_peopleSuggestorLoadedCondition;
    NSMutableArray *_offered;
    NSArray *_prevOffered;
    NSString *_name;
}

@property (retain) PSGInputSuggester *inputSuggester;

- (void)warmUp;
- (void)logEngagementForPredictedValues:(id)a0 position:(unsigned long long)a1;
- (id)getPeopleSuggester;
- (id)init;
- (void).cxx_destruct;
- (void)predictedItemsWithProactiveTrigger:(id)a0 searchContext:(id)a1 limit:(unsigned long long)a2 timeoutInMilliseconds:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)logImpressionForPredictedValues:(id)a0;
- (id)requestFromTrigger:(id)a0 searchContext:(id)a1;
- (void)hibernate;
- (BOOL)doesSupportTriggerSourceType:(unsigned char)a0;
- (void)propogateMetrics:(id)a0 data:(id)a1;
- (id)_getPredictedItemFromStructuredInfo:(id)a0;
- (id)name;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)a0 handler:(id /* block */)a1;
- (id)_quickTypeQueryWithTrigger:(id)a0 searchContext:(id)a1 limit:(unsigned long long)a2 timeoutInMilliseconds:(unsigned long long)a3 errorWithExplanations:(id *)a4;
- (BOOL)_populateError:(id *)a0 withExplanations:(id)a1;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)a0 handler:(id /* block */)a1;

@end
