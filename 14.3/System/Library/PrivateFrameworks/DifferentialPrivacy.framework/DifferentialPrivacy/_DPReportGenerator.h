@protocol _DPMetricsCollector;

@interface _DPReportGenerator : NSObject <_DPMaintenance>

@property (readonly, nonatomic) id<_DPMetricsCollector> metricsCollector;

+ (id)randomizeKeys:(id)a0 andSortByPriority:(BOOL)a1;
+ (id)queryKeysForPattern:(id)a0 storage:(id)a1;
+ (id)queryRecordsForKey:(id)a0 storage:(id)a1;
+ (id)filterNonConformingRecordsFrom:(id)a0;
+ (unsigned long long)queryRecordCountForKey:(id)a0 withPredicate:(id)a1 storage:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (id)generateReportForKeys:(id)a0 storage:(id)a1;
- (id)initWithMetricsCollector:(id)a0;
- (void)reportMetricsForKey:(id)a0 toBeSubmitted:(id)a1 currentDate:(id)a2 storage:(id)a3;
- (void)reportToPrivateCloudWithStrings:(id)a0 forKey:(id)a1;
- (BOOL)markSubmitted:(id)a0 storage:(id)a1;
- (id)generateReportUsing:(id)a0;

@end
