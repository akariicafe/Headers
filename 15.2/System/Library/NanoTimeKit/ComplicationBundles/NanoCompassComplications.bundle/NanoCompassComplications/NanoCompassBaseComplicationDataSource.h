@class CLKComplicationTimelineEntry, NSString, CLKComplicationTemplate, NCManager, NCManagerLocationToken, NCLocation, NCHeading, NCIncline, NCManagerMotionToken, NCBearing, NCAltitude, NCManagerAltimeterToken;

@interface NanoCompassBaseComplicationDataSource : CLKCComplicationBundleDataSource

@property (class, readonly, nonatomic) NSString *appNameLocalizationKey;
@property (class, readonly, nonatomic) NSString *complicationNameLocalizationKey;
@property (class, readonly, nonatomic) NSString *bundleIdentifierSuffix;

@property (retain, nonatomic) NCManager *manager;
@property (retain, nonatomic) NCManagerMotionToken *motionToken;
@property (retain, nonatomic) NCHeading *heading;
@property (retain, nonatomic) NCBearing *bearing;
@property (nonatomic) BOOL calibrated;
@property (retain, nonatomic) NCIncline *incline;
@property (retain, nonatomic) NCManagerLocationToken *locationToken;
@property (retain, nonatomic) NCLocation *location;
@property (retain, nonatomic) NCAltitude *altitude;
@property (retain, nonatomic) NCManagerAltimeterToken *altimeterToken;
@property (nonatomic) BOOL paused;
@property (retain, nonatomic) CLKComplicationTimelineEntry *timelineEntry;
@property (retain, nonatomic) CLKComplicationTemplate *alwaysOnTemplate;
@property (readonly, nonatomic) BOOL usesMotion;
@property (readonly, nonatomic) BOOL usesLocation;
@property (readonly, nonatomic) BOOL useAltimeter;
@property (readonly, nonatomic) BOOL usesBearing;

+ (id)appIdentifier;
+ (id)bundleIdentifier;
+ (id)localizedAppName;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (id)localizedComplicationName;

- (void)becomeActive;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)currentSwitcherTemplate;
- (void)becomeInactive;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2 mode:(long long)a3;
- (id)newTemplate;
- (id)noDataTemplate;
- (id)randomizedTemplate;
- (void)_startObservingNotifications;
- (void)_stopObservingNotifications;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)a0;
- (float)tritium_randomizedPossibility;
- (id)tritium_randomizedComplicationTemplateForDate:(id)a0 prevTemplateDate:(id)a1;

@end
