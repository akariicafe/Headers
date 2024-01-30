@class NSString, HKObserverSet, NSUserDefaults;
@protocol HKRPUserDefaultsSyncProviding;

@interface HKRPOxygenSaturationSettings : NSObject {
    HKObserverSet *_observers;
    NSUserDefaults *_userDefaults;
    id<HKRPUserDefaultsSyncProviding> _userDefaultsSyncProvider;
}

@property (readonly, nonatomic) NSString *bloodOxygenLocalizedPaneTitle;
@property (readonly, nonatomic) NSString *bloodOxygenSectionTitle;
@property (readonly, nonatomic) NSString *backgroundMeasurementsHeader;
@property (readonly, nonatomic) NSString *bloodOxygenMeasurementsTitle;
@property (readonly, nonatomic) NSString *backgroundMeasurementsTitle;
@property (readonly, nonatomic) NSString *backgroundMeasurementsValue;
@property (readonly, nonatomic) NSString *backgroundMeasurementsFooter;
@property (readonly, nonatomic) NSString *backgroundMeasurementsDetailOptionsTitle;
@property (readonly, nonatomic) NSString *backgroundMeasurementsDetailSleepTitle;
@property (readonly, nonatomic) NSString *backgroundMeasurementsDetailTheaterTitle;
@property (readonly, nonatomic) NSString *backgroundMeasurementsDetailOptionsFooter;
@property (readonly, nonatomic) NSString *learnMoreAboutBloodOxygenURL;
@property (nonatomic) BOOL oxygenSaturationDisabled;
@property (nonatomic) BOOL backgroundMeasurementsEnabled;
@property (nonatomic) BOOL backgroundMeasurementsDuringSleepMode;
@property (nonatomic) BOOL backgroundMeasurementsDuringTheaterMode;
@property (nonatomic) BOOL overrideIsRemoteDisabled;

+ (id)standardSettings;

- (void)addObserver:(id)a0 queue:(id)a1;
- (void)_notifySettingsDidChange;
- (id)initWithUserDefaults:(id)a0 userDefaultsSyncProvider:(id)a1;
- (void)_startObservingDefaults;
- (void)_setOxygenSaturationDisabled:(BOOL)a0;
- (void)activateDefaultValuesIfNeeded;
- (id)_settingsToObserve;
- (void)_stopObservingAllDefaults;
- (void)_setBackgroundMeasurementsEnabled:(BOOL)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setBackgroundMeasurementsDuringTheaterMode:(BOOL)a0;
- (void)_setBackgroundMeasurementsDuringSleepMode:(BOOL)a0;
- (void).cxx_destruct;
- (void)reset;

@end
