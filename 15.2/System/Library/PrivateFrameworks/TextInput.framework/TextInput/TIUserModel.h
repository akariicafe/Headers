@class NSString, NSArray, NSDictionary, NSDate, NSMutableDictionary;
@protocol TIUserModelConfigurationDelegate, TIUserModelDataStoring;

@interface TIUserModel : NSObject <TIUserModeling, TIMetricProviding> {
    id<TIUserModelDataStoring> _userModelStore;
    NSMutableDictionary *_durableCounters;
    NSMutableDictionary *_userModelValuesCollection;
    NSDictionary *_settingsDictionary;
    double _timeOfLastPersist;
}

@property (retain, nonatomic) NSDate *loadedDate;
@property BOOL userModelRateLimitingDisabled;
@property (readonly, nonatomic) NSString *inputMode;
@property (copy, nonatomic) NSArray *weeklyMetricKeys;
@property (readonly, nonatomic) NSDate *fromDate;
@property (readonly) BOOL explicitTearDown;
@property (weak, nonatomic) id<TIUserModelConfigurationDelegate> configurationDelegate;
@property (readonly, nonatomic) NSDictionary *cachedSettingsDictionary;
@property (readonly, nonatomic) NSArray *contexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (void)trackPowerLogIfNecessary;
- (void)doLoad;
- (void).cxx_destruct;
- (void)loadSettings;
- (void)loadIfNecessary;
- (BOOL)persistForDate:(id)a0;
- (int)valueForDurableKey:(id)a0;
- (id)valuesFromContext:(id)a0;
- (void)configureDurableCounters;
- (void)addToDurableCounter:(int)a0 forKey:(id)a1;
- (id)initWithInputMode:(id)a0 userModelDataStore:(id)a1;
- (void)addIntegerToTransientCounter:(int)a0 forKey:(id)a1 andCandidateLength:(int)a2 andContext:(id)a3;
- (void)addDoubleToTransientCounter:(double)a0 forKey:(id)a1 andCandidateLength:(int)a2 andContext:(id)a3;
- (id)initWithInputMode:(id)a0 userModelDataStore:(id)a1 weeklyMetricKeys:(id)a2 fromDate:(id)a3 explicitTearDown:(BOOL)a4;
- (void)configureDurableCounterForName:(id)a0;
- (id)populateSettingsDictionary;
- (void)dealloc;

@end
