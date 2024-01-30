@class NSString, FISleepUserDay, HKSPSleepStore, NSDate;
@protocol FISleepDataProviderDelegate;

@interface FISleepDataProvider : NSObject <HKSPSleepStoreObserver> {
    HKSPSleepStore *_sleepStore;
    id<FISleepDataProviderDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) FISleepUserDay *sleepUserDay;
@property (retain, nonatomic) NSDate *lastGoodMorningDismissedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (void)sleepStore:(id)a0 sleepScheduleDidChange:(id)a1;
- (void)sleepStore:(id)a0 sleepScheduleStateDidChange:(unsigned long long)a1;
- (void)sleepStore:(id)a0 sleepModeOnDidChange:(BOOL)a1;
- (void)sleepStore:(id)a0 sleepEventRecordDidChange:(id)a1;
- (void)_fetchLastGoodMorningDismissedDate;
- (void)_updateSleepUserDay;
- (void)_clearSleepUserDay;
- (BOOL)isDate:(id)a0 within24HoursOfDate:(id)a1;
- (void)_updateSleepUserDayFromWakeUp:(id)a0 currentDate:(id)a1;
- (void)_updateSleepUserDayFromWindDownOrBedtime:(id)a0 currentDate:(id)a1;
- (void)_setSleepUserDayWithStartOfDay:(id)a0 endOfDay:(id)a1;
- (BOOL)_updateLastGoodMorningDismissedDateIfNeeded:(id)a0;
- (id)initWithSleepStore:(id)a0 delegate:(id)a1;

@end
