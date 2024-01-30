@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADCoreAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> *_managementQueue;
    unsigned long long _singleAnalyticsSentCount;
    unsigned long long _sessionAnalyticsSentCount;
    NSMutableDictionary *_sessionAnalytics;
}

+ (id)sharedManager;

- (void)flush;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)sendEvent:(id)a0 withAnalytics:(id)a1;
- (void)setValue:(id)a0 forField:(id)a1 andEvent:(id)a2;
- (void)accumulateInt64Value:(long long)a0 forField:(id)a1 andEvent:(id)a2;
- (void)accumulateDoubleValue:(double)a0 forField:(id)a1 andEvent:(id)a2;
- (void)sendSessionEvent:(id)a0;

@end
