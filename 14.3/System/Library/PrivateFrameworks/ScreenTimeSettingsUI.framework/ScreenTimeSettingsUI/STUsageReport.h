@class STUsageReportGraphDataSet, NSArray, NSDictionary, NSString, NSDateInterval, NSDate, NSCache;

@interface STUsageReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double maxScreenTime;
@property (readonly, copy, nonatomic) NSDictionary *screenTimeByStartOfDateInterval;
@property (readonly, copy, nonatomic) NSDictionary *pickupsByStartOfDateInterval;
@property (readonly, copy, nonatomic) NSDictionary *pickupsByStartOfDateIntervalByTrustIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *notificationsByStartOfDateInterval;
@property (readonly, copy, nonatomic) NSDictionary *notificationsByStartOfDateIntervalByTrustIdentifier;
@property (readonly, nonatomic) double totalAppUsage;
@property (readonly, copy, nonatomic) NSDictionary *appUsageByStartOfDateInterval;
@property (readonly, copy, nonatomic) NSDictionary *applicationUsageByStartOfDateIntervalByTrustIdentifier;
@property (readonly, copy, nonatomic) NSArray *appUsages;
@property (readonly, nonatomic) double totalWebUsage;
@property (readonly, copy, nonatomic) NSDictionary *webUsageByStartOfDateInterval;
@property (readonly, copy, nonatomic) NSDictionary *webUsageByStartOfDateIntervalByTrustIdentifier;
@property (readonly, copy, nonatomic) NSArray *webUsages;
@property (readonly, nonatomic) double totalCategoryUsage;
@property (readonly, copy, nonatomic) NSDictionary *categoryUsageByStartOfDateInterval;
@property (readonly, copy, nonatomic) NSDictionary *categoryUsageByStartOfDateIntervalByTrustIdentifier;
@property (retain, nonatomic) NSCache *dataSetByUsageIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSDateInterval *reportDateInterval;
@property (readonly, copy, nonatomic) NSDate *lastUpdatedDate;
@property (readonly, copy, nonatomic) NSArray *dateIntervals;
@property (readonly, nonatomic) double totalScreenTime;
@property (readonly, nonatomic) STUsageReportGraphDataSet *screenTimeDataSet;
@property (readonly, nonatomic) double screenTimeDeltaFromHistoricalAverage;
@property (readonly, nonatomic) unsigned long long totalPickups;
@property (readonly, copy, nonatomic) NSDictionary *pickupsByTrustIdentifier;
@property (readonly, copy, nonatomic) NSArray *pickups;
@property (readonly, nonatomic) double pickupRate;
@property (readonly, nonatomic) double activePickupDateIntervals;
@property (readonly, nonatomic) double pickupFrequency;
@property (readonly, nonatomic) unsigned long long maxPickups;
@property (readonly, nonatomic) unsigned long long maxPickupDateIntervalIndex;
@property (readonly, nonatomic) STUsageReportGraphDataSet *pickupsDataSet;
@property (readonly, copy, nonatomic) NSDateInterval *maxPickupsDateInterval;
@property (readonly, nonatomic) NSDate *firstPickup;
@property (readonly) double pickupDeltaFromHistoricalAverage;
@property (readonly, nonatomic) unsigned long long totalNotifications;
@property (readonly, copy, nonatomic) NSDictionary *notificationsByTrustIdentifier;
@property (readonly, copy, nonatomic) NSArray *notifications;
@property (readonly, nonatomic) double notificationRate;
@property (readonly, nonatomic) STUsageReportGraphDataSet *notificationsDataSet;
@property (readonly) double notificationDeltaFromHistoricalAverage;
@property (readonly, copy, nonatomic) NSDictionary *applicationUsageByTrustIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *webUsageByTrustIdentifier;
@property (readonly, copy, nonatomic) NSArray *appAndWebUsages;
@property (readonly, copy, nonatomic) NSDictionary *categoryUsageByTrustIdentifier;
@property (readonly, copy, nonatomic) NSArray *categoryUsages;
@property (readonly, nonatomic) STUsageReportGraphDataSet *categoryUsageDataSet;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)topUsageItemsWithMaxCount:(unsigned long long)a0 type:(unsigned long long)a1 includeAggregateItem:(BOOL)a2 nonAggregateItems:(id *)a3 darkColors:(BOOL)a4;
- (id)dataSetWithUsageItem:(id)a0;
- (id)initWithReportType:(unsigned long long)a0 startDate:(id)a1 lastUpdatedDate:(id)a2 firstPickup:(id)a3 usageItems:(id)a4;
- (id)_dataSetForItemType:(unsigned long long)a0 trustIdentifier:(id)a1 includeIndicatorImageName:(BOOL)a2 useDarkColors:(BOOL)a3;
- (id)_countedDataSetForItemType:(unsigned long long)a0 trustIdentifier:(id)a1 includeIndicatorImageName:(BOOL)a2;
- (id)_timedDataSetForItemType:(unsigned long long)a0 useDarkColors:(BOOL)a1;
- (id)_timedDataSetForItemType:(unsigned long long)a0 trustIdentifier:(id)a1;
- (id)appAndWebUsageDataSetWithDarkColors:(BOOL)a0;

@end
