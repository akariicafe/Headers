@class NSArray, NSString, NSDate, STUsageReport;

@interface STUsageDetailsViewModel : NSObject

@property (retain) STUsageReport *selectedWeekUsageReport;
@property (copy) NSArray *weekUsageReports;
@property (retain) STUsageReport *selectedDayUsageReport;
@property (copy) NSArray *dayUsageReportByWeekdays;
@property (copy) NSDate *lastUpdatedDate;
@property BOOL hasAggregateUsageData;
@property (copy) NSArray *rawUsageItems;
@property (nonatomic) unsigned long long selectedWeek;
@property (nonatomic) unsigned long long selectedDay;
@property (readonly) STUsageReport *selectedUsageReport;
@property (getter=isLocalDevice) BOOL localDevice;
@property (copy) NSString *selectedItemDisplayName;
@property (readonly, nonatomic) BOOL hasUsageData;

+ (id)keyPathsForValuesAffectingSelectedUsageReport;
+ (id)keyPathsForValuesAffectingHasUsageData;
+ (void)_enumerateWeeklyReportStartDatesWithReferenceDate:(id)a0 ascending:(BOOL)a1 block:(id /* block */)a2;
+ (void)_enumerateDayReportStartDatesWithStartOfWeek:(id)a0 ascending:(BOOL)a1 block:(id /* block */)a2;

- (void).cxx_destruct;
- (id)init;
- (void)setSelectedWeek:(unsigned long long)a0 selectedDay:(unsigned long long)a1;
- (void)selectToday;
- (void)setWeekReportUsageItems:(id)a0 weekStartDate:(id)a1 lastUpdatedDate:(id)a2;
- (unsigned long long)_mostRecentAvailableWeekday;

@end
