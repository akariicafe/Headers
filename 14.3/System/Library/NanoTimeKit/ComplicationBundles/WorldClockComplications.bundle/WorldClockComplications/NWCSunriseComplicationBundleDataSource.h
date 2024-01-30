@class NSString, NSTimer, CLLocation, NWCComplicationTimelineEntryModelCache;

@interface NWCSunriseComplicationBundleDataSource : CLKCComplicationBundleDataSource

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) CLLocation *delayedLocation;
@property (retain, nonatomic) NSTimer *geocodeRequestDelayTimer;
@property (retain, nonatomic) NWCComplicationTimelineEntryModelCache *cache;
@property (retain, nonatomic) CLLocation *displayedLocation;
@property (retain, nonatomic) NSString *locationName;
@property (nonatomic, getter=isWaitingForGeocodeRequest) BOOL waitingForGeocodeRequest;

+ (id)appIdentifier;
+ (id)localizedAppName;
+ (id)bundleIdentifier;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (id)legacyNTKComplicationType;

- (void)becomeActive;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_startObserving;
- (void)_invalidate;
- (void)_stopObserving;
- (void)getTimelineEndDateWithHandler:(id /* block */)a0;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getTimelineEntriesAfterDate:(id)a0 limit:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (BOOL)supportsTapAction;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (unsigned long long)timelineAnimationBehavior;
- (void)becomeInactive;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)a0;
- (void)_handleLocation:(id)a0 error:(id)a1;
- (id)_currentEntry:(BOOL)a0;
- (id)_timelineEntryFromEntry:(id)a0;
- (id)_animationGroupForDate:(id)a0 showingSunrise:(BOOL)a1 constantSun:(long long)a2 haveLocation:(BOOL)a3;
- (void)_scheduleReverseGeocodeTimer:(double)a0;
- (BOOL)_needsToSendGeocodingRequest;
- (void)_geocodeRequestDelayTimerTriggerred;
- (id)_animationGroupForDate:(id)a0 showingSunrise:(BOOL)a1 constantSun:(long long)a2;
- (BOOL)_needsCurrentEventEntry;
- (id)_animationGroupForNoLocation;
- (id)_entryModelsForDate:(id)a0 nextEvaluationDate:(id *)a1;

@end
