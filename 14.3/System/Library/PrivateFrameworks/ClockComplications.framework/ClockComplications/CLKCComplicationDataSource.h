@class CLKCComplication, CLKDevice;
@protocol CLKCComplicationDataSourceDelegate;

@interface CLKCComplicationDataSource : NSObject

@property (class, readonly, nonatomic) BOOL hasSensitiveUI;
@property (class, readonly) long long tritiumUpdatePriority;

@property (readonly, nonatomic) CLKCComplication *complication;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) CLKDevice *device;
@property (weak, nonatomic) id<CLKCComplicationDataSourceDelegate> delegate;
@property (readonly, nonatomic) unsigned long long timelineAnimationBehavior;
@property (readonly, nonatomic) BOOL supportsTapAction;

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (BOOL)wantsToSkipPauseWhenEnteringTritium;

- (void)pauseAnimations;
- (void)resumeAnimations;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)getTimelineEndDateWithHandler:(id /* block */)a0;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)alwaysOnTemplate;
- (void)getTimelineEntriesAfterDate:(id)a0 limit:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (id)sampleTemplate;
- (id)complicationApplicationIdentifier;
- (BOOL)alwaysShowIdealizedTemplateInSwitcher;
- (id)lockedTemplate;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (void)becomeInactive;
- (void)didTouchDownInView:(id)a0;
- (void)didTouchUpInsideView:(id)a0;
- (id)privacyTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)a0;
- (void)getTimelineStartDateWithHandler:(id /* block */)a0;
- (void)getTimelineEntriesBeforeDate:(id)a0 limit:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)getDesiredUpdateIntervalWithHandler:(id /* block */)a0;

@end
