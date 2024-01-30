@class NSString, NSDictionary, NSArray, NSDate, NSMutableDictionary;
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
@property (weak, nonatomic) id<TIUserModelConfigurationDelegate> configurationDelegate;
@property (readonly, nonatomic) NSDictionary *cachedSettingsDictionary;
@property (readonly, nonatomic) NSArray *contexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)valueForDurableKey:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addIntegerToTransientCounter:(int)a0 forKey:(id)a1 andCandidateLength:(int)a2 andContext:(id)a3;
- (void)addToDurableCounter:(int)a0 forKey:(id)a1;
- (void)addDoubleToTransientCounter:(double)a0 forKey:(id)a1 andCandidateLength:(int)a2 andContext:(id)a3;
- (void)trackPowerLogIfNecessary;
- (id)valuesFromContext:(id)a0;
- (void)configureDurableCounters;
- (id)populateSettingsDictionary;
- (void)loadSettings;
- (void)doLoad;
- (id)initWithInputMode:(id)a0 userModelDataStore:(id)a1;
- (void)configureDurableCounterForName:(id)a0;
- (void)loadIfNecessary;
- (BOOL)persistForDate:(id)a0;

@end
