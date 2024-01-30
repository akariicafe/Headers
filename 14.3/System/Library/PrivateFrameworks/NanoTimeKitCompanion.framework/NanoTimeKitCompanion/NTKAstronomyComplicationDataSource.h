@class NSString, CLLocation;

@interface NTKAstronomyComplicationDataSource : NTKComplicationDataSource {
    NSString *_token;
    CLLocation *_currentLocation;
    CLLocation *_anyLocation;
    unsigned long long _vista;
    BOOL _listeningForNotifications;
}

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void)becomeActive;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_startObserving;
- (void)pause;
- (void)_invalidate;
- (void)_stopObserving;
- (void)resume;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (id)complicationApplicationIdentifier;
- (BOOL)supportsTapAction;
- (BOOL)alwaysShowIdealizedTemplateInSwitcher;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (unsigned long long)timelineAnimationBehavior;
- (void)_handleLocationUpdate:(id)a0 anyLocation:(id)a1;
- (id)_currentTimelineEntryWithIdealizedDate:(BOOL)a0;
- (void)becomeInactive;

@end
