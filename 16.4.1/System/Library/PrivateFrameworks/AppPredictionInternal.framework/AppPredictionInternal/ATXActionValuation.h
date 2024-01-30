@class ATXIntentMetadataCache;

@interface ATXActionValuation : NSObject {
    ATXIntentMetadataCache *_intentCache;
}

- (id)getCurrentLocation;
- (void)scoreActions:(id)a0 scoreLogger:(id)a1 consumerSubType:(unsigned char)a2;
- (BOOL)shouldPredictSendMessageIntent:(id)a0;
- (id)initWithIntentCache:(id)a0;
- (BOOL)shouldPredictCreateEventIntent:(id)a0;
- (id)init;
- (BOOL)shouldPredictRequestRideIntent:(id)a0;
- (void)setFeatureValuesAndFilterPredictableActions:(id)a0 actionStatistics:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldPredictIntent:(id)a0;

@end
