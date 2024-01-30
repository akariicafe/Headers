@class NTKPeopleComplication, NSString, NSObject, NTKPeopleComplicationEntry;
@protocol OS_dispatch_queue;

@interface NTKPeopleComplicationDataSource : NTKComplicationDataSource {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isPaused;
    BOOL _needsInvalidation;
    NTKPeopleComplication *_complication;
    NSString *_secondaryContactID;
    NSString *_storeBackedContactID;
    NTKPeopleComplicationEntry *_timelineEntry;
    NTKPeopleComplicationEntry *_switcherEntry;
}

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (long long)tritiumUpdatePriority;

- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (void)_invalidateIfNeeded;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (id)complicationApplicationIdentifier;
- (BOOL)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (id)_loadTimelineEntry;
- (void)_queue_reloadTimelineEntry;
- (void)_didReceiveContactsCachceChangedNotification;
- (id)lockedTemplate;

@end
