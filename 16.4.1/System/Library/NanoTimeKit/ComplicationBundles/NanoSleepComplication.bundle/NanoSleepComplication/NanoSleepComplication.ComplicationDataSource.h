@class NSString;

@interface NanoSleepComplication.ComplicationDataSource : CLKCComplicationBundleDataSource {
    void /* unknown type, empty encoding */ template;
}

@property (class, nonatomic, readonly) NSString *bundleIdentifier;
@property (class, nonatomic, readonly) NSString *appIdentifier;
@property (class, nonatomic, readonly) NSString *localizedAppName;

@property (nonatomic, readonly) unsigned long long timelineAnimationBehavior;

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;

@end
