@class TransparencySFAnalytics;

@interface TransparencyAnalytics : NSObject

@property (retain) TransparencySFAnalytics *sfanalytics;

+ (id)logger;
+ (BOOL)doWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (id)formatEventName:(id)a0 application:(id)a1;
+ (BOOL)hasInternalDiagnostics;

- (void)logSuccessForEventNamed:(id)a0;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;
- (void)logMetric:(id)a0 withName:(id)a1;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)noteEventNamed:(id)a0;
- (void)addMultiSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (void).cxx_destruct;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)removeMultiSamplerForName:(id)a0;

@end
