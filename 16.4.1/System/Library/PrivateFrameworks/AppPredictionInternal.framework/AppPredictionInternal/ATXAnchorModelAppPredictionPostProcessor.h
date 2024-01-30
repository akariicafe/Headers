@class ATXAppPredictionBlacklist, ATXAnchorModelPrediction, ATXAnchorModelDataStoreWrapper;

@interface ATXAnchorModelAppPredictionPostProcessor : NSObject {
    ATXAnchorModelPrediction *_anchorModelPrediction;
    ATXAnchorModelDataStoreWrapper *_storeWrapper;
    ATXAppPredictionBlacklist *_blacklist;
}

- (void).cxx_destruct;
- (id)initWithAnchorModelPrediction:(id)a0;
- (id)initWithAnchorModelPrediction:(id)a0 blacklist:(id)a1;
- (BOOL)shouldPredictAnchorModelAppPrediction;

@end
