@class NSString, SFAnalyticsSQLiteStore, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SFAnalytics : NSObject <SFAnalyticsProtocol> {
    NSMutableDictionary *_samplers;
    NSMutableDictionary *_multisamplers;
    unsigned char _disableLogging : 1;
}

@property (class, readonly) NSString *databasePath;

@property (retain, nonatomic) SFAnalyticsSQLiteStore *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)fuzzyNumber:(id)a0;
+ (id)defaultAnalyticsDatabasePath:(id)a0;
+ (id)defaultProtectedAnalyticsDatabasePath:(id)a0;
+ (void)addOSVersionToEvent:(id)a0;
+ (long long)fuzzyInteger:(long long)a0;
+ (long long)fuzzyDaysSinceDate:(id)a0;
+ (id)defaultProtectedAnalyticsDatabasePath:(id)a0 uuid:(id)a1;
+ (id)hwModelID;

- (id)datePropertyForKey:(id)a0;
- (void)logSuccessForEventNamed:(id)a0;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;
- (void)setDateProperty:(id)a0 forKey:(id)a1;
- (void)logMetric:(id)a0 withName:(id)a1;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)noteEventNamed:(id)a0;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)removeState;
- (id)AddMultiSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (id)logSystemMetricsForActivityNamed:(id)a0 withAction:(id /* block */)a1;
- (id)startLogSystemMetricsForActivityNamed:(id)a0;
- (void)incrementIntegerPropertyForKey:(id)a0;
- (void)setNumberProperty:(id)a0 forKey:(id)a1;
- (id)numberPropertyForKey:(id)a0;
- (id)coreAnalyticsKeyFilter:(id)a0;
- (void)dailyCoreAnalyticsMetrics:(id)a0;
- (id)existingMetricSamplerForName:(id)a0;
- (void)logSuccessForEventNamed:(id)a0 timestampBucket:(unsigned int)a1;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1 timestampBucket:(unsigned int)a2;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1 timestampBucket:(unsigned int)a2;
- (void)logEventNamed:(id)a0 class:(long long)a1 attributes:(id)a2;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 timestampBucket:(unsigned int)a3;
- (void)logEventNamed:(id)a0 class:(long long)a1 attributes:(id)a2 timestampBucket:(unsigned int)a3;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3 timestampBucket:(unsigned int)a4;
- (void)noteEventNamed:(id)a0 timestampBucket:(unsigned int)a1;
- (id)eventDictForEventName:(id)a0 withAttributes:(id)a1 eventClass:(long long)a2 timestampBucket:(double)a3;
- (id)existingMultiSamplerForName:(id)a0;
- (id)addMetricSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (void)removeMetricSamplerForName:(id)a0;
- (void)logMetric:(id)a0 withName:(id)a1 oncePerReport:(BOOL)a2;
- (void)removeMultiSamplerForName:(id)a0;

@end
