@interface IMMetrics : NSObject

+ (void)enable;
+ (void)initialize;
+ (void)disable;
+ (void)setLogLevel:(int)a0;
+ (void)startTimer:(id)a0;
+ (void)recordEvent:(id)a0;
+ (void)addMetricsController:(id)a0;
+ (BOOL)canRecordEvent;
+ (void)cancelFlush;
+ (id)defaultMetricsController;
+ (double)endTimer:(id)a0;
+ (double)endTimer:(id)a0 dataSource:(id)a1;
+ (double)endTimer:(id)a0 dataSource:(id)a1 withData:(id)a2;
+ (id)flushImmediately;
+ (id)keyForTimerName:(id)a0 dataSource:(id)a1;
+ (id)metricsControllerForTopic:(id)a0;
+ (void)recordEvent:(id)a0 dataSource:(id)a1 data:(id)a2;
+ (void)recordEvent:(id)a0 dataSource:(id)a1 data:(id)a2 topic:(id)a3;
+ (void)recordEvent:(id)a0 topic:(id)a1;
+ (void)recordEvent:(id)a0 with:(id)a1;
+ (void)recordMemory:(id)a0;
+ (void)recordUserAction:(id)a0;
+ (void)recordUserAction:(id)a0 dataSource:(id)a1;
+ (void)recordUserAction:(id)a0 dataSource:(id)a1 withData:(id)a2;
+ (void)removeMetricsController:(id)a0;
+ (void)setDefaultMetricsController:(id)a0;
+ (void)setupEvent:(id)a0 forDataSource:(id)a1;
+ (void)startTimer:(id)a0 dataSource:(id)a1;

@end
