@class NSObject, ATXCacheReader, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ATXClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _consumerType;
    ATXCacheReader *_cacheReader;
}

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)clientForConsumerType:(unsigned long long)a0;
+ (id)clientForConsumerType:(unsigned long long)a0 cacheBasePath:(id)a1;
+ (id)clientForConsumerType:(unsigned long long)a0 cachePath:(const char *)a1;

- (id)atxResponseFromBlendingAppPredictionCacheForConsumerSubType:(unsigned char)a0 filterPredicate:(id)a1 limit:(int)a2;
- (id)init;
- (void).cxx_destruct;
- (id)_getConnection;
- (id)appPredictionsForConsumerSubType:(unsigned char)a0 limit:(int)a1;
- (id)_minuteZeroResponse;
- (void)dealloc;
- (id)_asyncProxy;
- (id)initWithConsumerType:(unsigned long long)a0 cacheBasePath:(id)a1;
- (id)appPredictionsForConsumerSubType:(unsigned char)a0 blackList:(id)a1 limit:(int)a2 runningDiagnostics:(BOOL)a3;
- (id)_syncProxy;
- (id)getAppPredictorAssetMappingDescription;
- (BOOL)forceCacheUpdateForConsumerSubType:(unsigned char)a0 intent:(id)a1 candidateBundleIdentifiers:(id)a2 candidateIntentTypeIdentifiers:(id)a3;
- (id)_predicateForBlacklist:(id)a0;
- (void)sortAppsByLaunches:(id)a0 reply:(id /* block */)a1;
- (id)_simulatorResponse;
- (void)logUserFeedback:(id)a0 consumerSubType:(unsigned char)a1 engagementType:(unsigned long long)a2 bundleIdentifier:(id)a3 bundleIdsShown:(id)a4 explicitlyRejectedIds:(id)a5;

@end
