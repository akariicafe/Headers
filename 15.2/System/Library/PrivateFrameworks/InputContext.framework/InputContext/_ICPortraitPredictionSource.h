@class NSString, PPQuickTypeBroker, NSCondition;

@interface _ICPortraitPredictionSource : NSObject <_ICPredictionSourcing, _ICFeedbackAccepting> {
    NSCondition *_ppBrokerLoadedCondition;
    NSString *_name;
}

@property (retain) PPQuickTypeBroker *ppBroker;

- (void)warmUp;
- (BOOL)_populateError:(id *)a0 withExplanations:(id)a1;
- (id)_quickTypeQueryWithTrigger:(id)a0 searchContext:(id)a1 limit:(unsigned long long)a2 timeoutInMilliseconds:(unsigned long long)a3 errorWithExplanations:(id *)a4;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)a0 handler:(id /* block */)a1;
- (id)_quickTypeQueryWithQuery:(id)a0 limit:(unsigned long long)a1 timeoutInMilliseconds:(unsigned long long)a2;
- (void)hibernate;
- (void).cxx_destruct;
- (id)init;
- (void)predictedItemsWithProactiveTrigger:(id)a0 searchContext:(id)a1 limit:(unsigned long long)a2 timeoutInMilliseconds:(unsigned long long)a3 handler:(id /* block */)a4;
- (id)getPPBroker;
- (id)name;
- (void)propogateMetrics:(id)a0 data:(id)a1;
- (id)_makePPQuickTypeBroker;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (BOOL)doesSupportTriggerSourceType:(unsigned char)a0;

@end
