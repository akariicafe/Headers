@class NSString, City, NSArray, NSDate, WeatherCloudPreferences;
@protocol SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;

@interface WeatherPreferences : NSObject <WFTemperatureUnitObserver, NSURLConnectionDelegate> {
    NSString *_UUID;
    BOOL _serviceDebugging;
    NSArray *_lastUbiquitousWrittenDefaults;
    id<WeatherPreferencesPersistence> _persistence;
    NSString *_cacheDirectoryPath;
    BOOL _logUnitsAndLocale;
}

@property (nonatomic) BOOL userGroupPrefsLockedWhenInit;
@property (readonly) int userTemperatureUnit;
@property (retain) WeatherCloudPreferences *cloudPreferences;
@property (weak, nonatomic) id<SynchronizedDefaultsDelegate> syncDelegate;
@property (nonatomic, getter=isLocalWeatherEnabled, setter=setLocalWeatherEnabled:) BOOL isLocalWeatherEnabled;
@property (readonly, nonatomic) City *localWeatherCity;
@property (readonly, weak, nonatomic) NSDate *lastUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)performUpgradeOfPersistence:(id)a0 fileManager:(id)a1 error:(id *)a2;
+ (id)preferencesWithPersistence:(id)a0;
+ (id)readInternalDefaultValueForKey:(id)a0;
+ (id)sharedPreferences;
+ (id)serviceDebuggingPath;
+ (id)userDefaultsPersistence;

- (void)resetLocale;
- (id)initWithPersistence:(id)a0;
- (id)citiesByConsolidatingDuplicatesInBucket:(id)a0;
- (void)adjustPrefsForLocalWeatherEnabled:(BOOL)a0;
- (int)loadDefaultSelectedCity;
- (BOOL)serviceDebugging;
- (id)readDefaultValueForKey:(id)a0;
- (id)init;
- (void)saveToDiskWithCity:(id)a0 forActiveIndex:(unsigned long long)a1;
- (void)synchronizeStateToDiskDoNotify:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)readTemperatureUnits;
- (id)UUID;
- (id)_defaultCities;
- (void)forceSyncCloudPreferences;
- (void)setDefaultCities:(id)a0;
- (BOOL)_defaultsCurrent;
- (void)saveToDiskWithCities:(id)a0;
- (id)twcLogoURL:(id)a0;
- (BOOL)areCitiesDefault:(id)a0;
- (void)setupUbiquitousStoreIfNeeded;
- (void)registerTemperatureUnits;
- (id)readInternalDefaultValueForKey:(id)a0;
- (BOOL)ensureValidSelectedCityID;
- (BOOL)_defaultsAreValid;
- (void)setDefaultSelectedCity:(unsigned long long)a0;
- (void)writeDefaultValue:(id)a0 forKey:(id)a1;
- (void)temperatureUnitObserver:(id)a0 didChangeTemperatureUnitTo:(int)a1;
- (void)setActiveCity:(unsigned long long)a0;
- (void)saveToDiskWithLocalWeatherCity:(id)a0;
- (void)saveToDiskWithCities:(id)a0 activeCity:(unsigned long long)a1;
- (id)loadDefaultSelectedCityID;
- (BOOL)isCelsius;
- (id)twcLogoURL;
- (id)preferencesDictionaryForCity:(id)a0;
- (void)_clearCachedObjects;
- (id)_cacheDirectoryPath;
- (void)synchronizeStateToDisk;
- (void)setCelsius:(BOOL)a0;
- (int)loadActiveCity;
- (id)citiesByConsolidatingDuplicates:(id)a0 originalOrder:(id)a1;
- (id)cityFromPreferencesDictionary:(id)a0;
- (id)loadSavedCities;
- (void)saveToUbiquitousStore;
- (void)setDefaultSelectedCityID:(id)a0;

@end
