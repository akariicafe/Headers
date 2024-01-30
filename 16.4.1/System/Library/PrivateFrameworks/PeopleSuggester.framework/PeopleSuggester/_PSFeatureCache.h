@class NSUserDefaults, _PSPredictionContext, NSArray, NSSet, NSMutableDictionary, _CDInteractionStore, NSObject, _PSHistogramFeatureData, _PSShareSheetEphemeralFeatureManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _PSFeatureCache : NSObject {
    _PSPredictionContext *_context;
    NSSet *_candidates;
    _CDInteractionStore *_store;
    _PSHistogramFeatureData *_histogramFeatureData;
    NSArray *_caches;
    NSMutableDictionary *_cache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSUserDefaults *_psDefaults;
    unsigned long long _timeDelay;
    unsigned long long _leeway;
}

@property (retain, nonatomic) _PSShareSheetEphemeralFeatureManager *ephemeralFeatureManager;

- (void).cxx_destruct;
- (id)addSelfToCandidates:(id)a0;
- (id)computeEphemeralFeaturesWithCandidates:(id)a0 context:(id)a1;
- (id)fetchFeaturesWithCandidates:(id)a0 context:(id)a1;
- (id)getDeviceIdentifier;
- (id)getFeatureValueForLabeledDataStore:(id)a0;
- (id)getHistogramFeatureData;
- (id)initWithPredictionContext:(id)a0 candidates:(id)a1 caches:(id)a2 store:(id)a3;
- (void)invalidateAndRefreshCache;
- (id)privacyMitigateFeatures:(id)a0;
- (void)refreshDurableCachesWithCandidates:(id)a0;
- (void)replaceEphemeralFeaturesWithCache:(id)a0;
- (void)saveToLabeledDataStoreWithSessionID:(id)a0;
- (void)saveToVirtualStore;
- (void)setFeatureValueForFeatureName:(int)a0 featureValue:(id)a1 candidate:(id)a2;
- (void)setPredictionContextWithContext:(id)a0;

@end
