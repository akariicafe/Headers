@class NSString;

@interface WeatherComplications.BaseDataSource : CLKCComplicationBundleDataSource {
    void /* unknown type, empty encoding */ switcherTemplate;
    void /* unknown type, empty encoding */ forecast;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ templateFormatter;
    void /* unknown type, empty encoding */ becomeActiveDate;
    void /* unknown type, empty encoding */ lastUpdateDate;
    void /* unknown type, empty encoding */ lastCurrentDescription;
    void /* unknown type, empty encoding */ launchLog;
}

@property (class, nonatomic, readonly) NSString *appIdentifier;
@property (class, nonatomic, readonly) NSString *localizedAppName;
@property (class, nonatomic, readonly) NSString *localizedComplicationName;

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void)becomeActive;
- (id)init;
- (void).cxx_destruct;
- (void)becomeInactive;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (void)getTimelineEndDateWithHandler:(id /* block */)a0;
- (void)getTimelineEntriesAfterDate:(id)a0 limit:(long long)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)sampleTemplate;

@end
