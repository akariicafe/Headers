@class NSMutableArray, NSDate;
@protocol NWCComplicationTimelineEntryModelCacheDataSource;

@interface NWCComplicationTimelineEntryModelCache : NSObject

@property (retain, nonatomic) NSMutableArray *cachedEntryModels;
@property (readonly, nonatomic) NSDate *cacheStartDate;
@property (readonly, nonatomic) NSDate *cacheEndDate;
@property (readonly, weak, nonatomic) id<NWCComplicationTimelineEntryModelCacheDataSource> dataSource;

+ (id)_startOfDayBeforeDate:(id)a0;
+ (id)_startOfDayAfterDate:(id)a0;
+ (id)_startOfDayForDate:(id)a0;
+ (id)_endOfDayForDate:(id)a0;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_cachedEntryModelForDate:(id)a0;
- (void)_extendCacheTowardDate:(id)a0;
- (id)_cachedEntryModelAfterDate:(id)a0 limit:(unsigned long long)a1;
- (BOOL)hasEntryModelForDate:(id)a0;
- (id)entryModelForDate:(id)a0;
- (id)entryModelsAfterDate:(id)a0 limit:(unsigned long long)a1;

@end
