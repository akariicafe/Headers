@class CLKClockComplicationCountSet, NSHashTable;

@interface CLKComplicationObserver : NSObject {
    NSHashTable *_wakeSessionObservers;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) CLKClockComplicationCountSet *homeScreenComplicationCountSet;

+ (id)sharedObserver;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)complicationListDidChange;
- (void)addWakeSessionObserver:(id)a0;
- (void)reloadOrExtendForBundleID:(id)a0;
- (void)removeWakeSessionObserver:(id)a0;
- (void)setHomeScreenComplicationCountSet:(id)a0;
- (void)wakeSessionWillBeginForBundleID:(id)a0;
- (void)wakeSessionWillEndForBundleID:(id)a0;

@end
