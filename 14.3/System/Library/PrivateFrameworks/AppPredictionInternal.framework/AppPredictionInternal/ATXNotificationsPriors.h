@class NSDictionary, ATXApp2VecMapping;

@interface ATXNotificationsPriors : NSObject {
    NSDictionary *_parameters;
    double _defaultPrior;
    ATXApp2VecMapping *_appFeatures;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetClass:(Class)a0 andPathToAppFeatures:(id)a1;
- (double)getAppBiasForBundleId:(id)a0;
- (double)getPriorForAppId:(id)a0;

@end
