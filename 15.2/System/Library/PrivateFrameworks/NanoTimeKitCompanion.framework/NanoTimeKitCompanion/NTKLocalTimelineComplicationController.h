@class NSMutableSet, NSString, CLKCComplicationDataSource, TLTimeline, CLKComplicationTemplate, NSDate, NTKTimelineDataOperation;

@interface NTKLocalTimelineComplicationController : NTKTimelineComplicationController <CLKCComplicationDataSourceDelegate, TLTimelineDelegate, NTKTimeTravel> {
    CLKCComplicationDataSource *_dataSource;
    NSDate *_timeTravelDate;
    BOOL _supportsTimeTravelForward;
    NSDate *_timelineEndDate;
    BOOL _hasQueuedAnimation;
    unsigned long long _queuedAnimation;
    TLTimeline *_timeline;
    NTKTimelineDataOperation *_currentOperation;
    NSMutableSet *_suspendedRightBoundaryDates;
    NSMutableSet *_delayedBlocks;
    CLKComplicationTemplate *_switcherTemplate;
    BOOL _hasBeenLive;
    long long _dataSourceState;
}

@property (readonly, nonatomic) CLKComplicationTemplate *sharingTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)complicationDataSourceClassForComplication:(id)a0 family:(long long)a1 device:(id)a2;
+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 family:(long long)a1 forDevice:(id)a2;

- (void)_deactivate;
- (void).cxx_destruct;
- (void)_activate;
- (id)_currentEntry;
- (id)alwaysOnTemplate;
- (void)invalidateSwitcherTemplate;
- (void)setShowsLockedUI:(BOOL)a0;
- (void)setDataMode:(long long)a0 forDisplayWrapper:(id)a1;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (id)complicationApplicationIdentifier;
- (void)addDisplayWrapper:(id)a0;
- (BOOL)hasTapAction;
- (Class)richComplicationDisplayViewClass;
- (void)invalidateEntries;
- (void)performTapAction;
- (id)lockedTemplate;
- (id)initWithComplication:(id)a0 family:(long long)a1 face:(id)a2 slot:(id)a3;
- (void)setIgnoreNewTemplates:(BOOL)a0;
- (id)activeDisplayTemplate;
- (void)setCurrentTemplate:(id)a0 reason:(long long)a1 animation:(unsigned long long)a2;
- (void)_cancelDelayedBlocks;
- (void)_queueAnimationForNextUpdate:(unsigned long long)a0;
- (void)_resetTimelineForCachingChange;
- (void)_startSetupOperationIfPossible;
- (void)_requestDataSourceToUpdateToState:(long long)a0;
- (void)_extendTimelineIfNecessaryAndPossible;
- (void)_updateCurrentTemplateWithReason:(long long)a0;
- (void)_updateDimStateForCurrentTimeline;
- (void)appendEntries:(id)a0 withTritiumUpdatePriority:(long long)a1;
- (void)setTimelineEndDate:(id)a0;
- (void)_completeSetupOperationWithEndDate:(id)a0 currentEntry:(id)a1;
- (void)_startExtendOperationIfNecessaryForTimeline:(id)a0 withDate:(id)a1 minBuffer:(double)a2;
- (void)_startExtendRightOperationFromDate:(id)a0;
- (void)_suspendRightBoundaryDate:(id)a0;
- (void)_completeExtendRightOperationWithBoundaryDate:(id)a0 entries:(id)a1;
- (void)didTouchDownInView:(id)a0;
- (void)didTouchUpInsideView:(id)a0;
- (void)invalidateEntriesWithTritiumUpdatePriority:(long long)a0;
- (void)appendEntries:(id)a0;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)entriesDidChangeInTimeline:(id)a0;
- (void)timeline:(id)a0 didChangeNowEntryFrom:(id)a1 to:(id)a2;
- (void)_applyCachingMode;
- (void)_applyUpdatingMode;
- (void)_applyAnimationMode;
- (void)_updateIsComplicationActive:(BOOL)a0;

@end
