@interface NTKWeatherProxiedComplicationDataSource : NTKComplicationDataSource

@property (retain, nonatomic) id proxy;

+ (Class)proxyClass;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void)becomeActive;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)setDelegate:(id)a0;
- (void)getTimelineEndDateWithHandler:(id /* block */)a0;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getTimelineEntriesAfterDate:(id)a0 limit:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (id)sampleTemplate;
- (id)complicationApplicationIdentifier;
- (id)lockedTemplate;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (void)becomeInactive;

@end
