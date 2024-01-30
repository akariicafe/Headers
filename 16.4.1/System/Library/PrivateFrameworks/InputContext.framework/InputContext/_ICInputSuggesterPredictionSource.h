@class NSArray, NSString, NSCondition, NSMutableArray, PSGInputSuggester;

@interface _ICInputSuggesterPredictionSource : NSObject <_ICPredictionSourcing, _ICFeedbackAccepting> {
    NSCondition *_peopleSuggestorLoadedCondition;
    NSMutableArray *_offered;
    NSArray *_prevOffered;
    NSString *_name;
}

@property (retain) PSGInputSuggester *inputSuggester;

- (void)hibernate;
- (BOOL)doesSupportTriggerSourceType:(unsigned char)a0;
- (id)_getPredictedItemFromStructuredInfo:(id)a0;
- (id)getPeopleSuggester;
- (id)requestFromTrigger:(id)a0 searchContext:(id)a1;
- (id)_quickTypeQueryWithTrigger:(id)a0 searchContext:(id)a1 limit:(unsigned long long)a2 timeoutInMilliseconds:(unsigned long long)a3 errorWithExplanations:(id *)a4;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)a0 handler:(id /* block */)a1;
- (BOOL)_populateError:(id *)a0 withExplanations:(id)a1;
- (void)warmUp;
- (void)logEngagementForPredictedValues:(id)a0 position:(unsigned long long)a1;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)propogateMetrics:(id)a0 data:(id)a1;
- (void)logImpressionForPredictedValues:(id)a0;
- (id)init;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)predictedItemsWithProactiveTrigger:(id)a0 searchContext:(id)a1 limit:(unsigned long long)a2 timeoutInMilliseconds:(unsigned long long)a3 handler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)name;

@end
