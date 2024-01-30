@interface AMDPerf : NSObject

+ (void)enable:(BOOL)a0;
+ (void)setVerbosity:(char)a0;
+ (void)sampleForKey:(id)a0;
+ (void)startMonitoringEvent:(id)a0;
+ (void)endMonitoringEvent:(id)a0;
+ (void)logWithLevel:(int)a0 andFormat:(id)a1;
+ (void)provision;
+ (id)generatePerformanceDict;
+ (id)getContainer;

@end
