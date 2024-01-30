@class NSString, NSTimer, CLLocation, NWCComplicationTimelineEntryModelCache;

@interface NWCSunriseComplicationBundleDataSource : CLKCComplicationBundleDataSource

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) CLLocation *geocodeDelayedLocation;
@property (retain, nonatomic) NSTimer *geocodeRequestDelayTimer;
@property (nonatomic) BOOL waitingForChinaShiftingRequest;
@property (retain, nonatomic) NWCComplicationTimelineEntryModelCache *cache;
@property (retain, nonatomic) CLLocation *displayedLocation;
@property (retain, nonatomic) NSString *locationName;
@property (retain, nonatomic) CLLocation *chinaShiftedLocation;
@property (nonatomic, getter=isWaitingForGeocodeRequest) BOOL waitingForGeocodeRequest;

+ (id)appIdentifier;
+ (id)localizedAppName;
+ (id)bundleIdentifier;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (id)legacyNTKComplicationType;

- (void)_startObserving;
- (void)_stopObserving;
- (void)becomeActive;
- (void)dealloc;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)becomeInactive;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (void)getTimelineEndDateWithHandler:(id /* block */)a0;
- (void)getTimelineEntriesAfterDate:(id)a0 limit:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (BOOL)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;
- (id)_animationGroupForNoLocation;
- (id)_animationGroupForDate:(id)a0 showingSunrise:(BOOL)a1 constantSun:(long long)a2 haveLocation:(BOOL)a3;
- (id)_animationGroupForDate:(id)a0 showingSunrise:(BOOL)a1 constantSun:(long long)a2;
- (void)_chinaLocationShiftRequest:(id)a0;
- (id)_currentEntry:(BOOL)a0;
- (id)_entryModelsForDate:(id)a0 nextEvaluationDate:(id *)a1;
- (void)_geocodeRequestDelayTimerTriggerred;
- (void)_handleLocation:(id)a0 error:(id)a1;
- (BOOL)_needsCurrentEventEntry;
- (BOOL)_needsToSendChinaLocationShiftRequest;
- (BOOL)_needsToSendGeocodingRequest;
- (void)_scheduleReverseGeocodeTimer:(double)a0;
- (id)_timelineEntryFromEntry:(id)a0;

@end
