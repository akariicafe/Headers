@class NBComplicationSharedDataSource;

@interface NanoBooksComplicationBundleDataSource : CLKCComplicationBundleDataSource <NBComplicationSharedDataSourceObserver>

@property (retain, nonatomic) NBComplicationSharedDataSource *dataSource;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL needsInvalidate;
@property (nonatomic) BOOL wantsRecentBookName;

+ (id)appIdentifier;
+ (id)localizedAppName;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (void)_invalidateIfNeeded;
- (void)getTimelineEndDateWithHandler:(id /* block */)a0;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getTimelineEntriesAfterDate:(id)a0 limit:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (id)sampleTemplate;
- (BOOL)supportsTapAction;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (void)sharedDataSourceDidChange;
- (void)mq_invalidateIfNeeded;

@end
