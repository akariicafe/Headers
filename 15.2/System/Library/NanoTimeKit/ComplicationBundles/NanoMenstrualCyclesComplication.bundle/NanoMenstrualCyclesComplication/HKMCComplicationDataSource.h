@class CLKComplicationTemplate;

@interface HKMCComplicationDataSource : CLKCComplicationBundleDataSource {
    CLKComplicationTemplate *_template;
}

+ (id)appIdentifier;
+ (id)_tintColor;
+ (id)bundleIdentifier;
+ (id)localizedAppName;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (id)_currentTimelineEntry;
- (unsigned long long)timelineAnimationBehavior;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (void)_configureTemplate;

@end
