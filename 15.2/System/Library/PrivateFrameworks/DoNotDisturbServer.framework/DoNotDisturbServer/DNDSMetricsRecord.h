@class NSDictionary, NSString, NSDate;

@interface DNDSMetricsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSDictionary *metricsByDay;
@property (readonly, copy, nonatomic) NSDate *lastDailyHeartbeat;
@property (readonly, copy, nonatomic) NSDictionary *metricsByWeek;
@property (readonly, copy, nonatomic) NSDate *lastWeeklyHeartbeat;
@property (readonly, copy, nonatomic) NSDictionary *metricsByMonth;
@property (readonly, copy, nonatomic) NSDate *lastMonthlyHeartbeat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)backingStoreWithFileURL:(id)a0;

- (id)_initWithRecord:(id)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_initWithMetricsByDay:(id)a0 lastDailyHeartbeat:(id)a1 metricsByWeek:(id)a2 lastWeeklyHeartbeat:(id)a3 metricsByMonth:(id)a4 lastMonthlyHeartbeat:(id)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
