@class NSObject, ATXCacheReader, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ATXClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _consumerType;
    ATXCacheReader *_cacheReader;
}

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)clientForConsumerType:(unsigned long long)a0 cacheBasePath:(id)a1;
+ (id)clientForConsumerType:(unsigned long long)a0;
+ (id)clientForConsumerType:(unsigned long long)a0 cachePath:(const char *)a1;

- (id)_getConnection;
- (id)atxResponseFromBlendingAppPredictionCacheForConsumerSubType:(unsigned char)a0 filterPredicate:(id)a1 limit:(int)a2;
- (BOOL)forceCacheUpdateForConsumerSubType:(unsigned char)a0 intent:(id)a1 candidateBundleIdentifiers:(id)a2 candidateIntentTypeIdentifiers:(id)a3;
- (id)_simulatorResponse;
- (id)_asyncProxy;
- (void)logUserFeedback:(id)a0 consumerSubType:(unsigned char)a1 engagementType:(unsigned long long)a2 bundleIdentifier:(id)a3 bundleIdsShown:(id)a4 explicitlyRejectedIds:(id)a5;
- (id)initWithConsumerType:(unsigned long long)a0 cacheBasePath:(id)a1;
- (void)sortAppsByLaunches:(id)a0 reply:(id /* block */)a1;
- (id)appPredictionsForConsumerSubType:(unsigned char)a0 blackList:(id)a1 limit:(int)a2 runningDiagnostics:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;
- (id)_predicateForDenyList:(id)a0;
- (id)_minuteZeroResponse;
- (void)dealloc;
- (id)_syncProxy;
- (id)appPredictionsForConsumerSubType:(unsigned char)a0 limit:(int)a1;
- (id)getAppPredictorAssetMappingDescription;

@end
