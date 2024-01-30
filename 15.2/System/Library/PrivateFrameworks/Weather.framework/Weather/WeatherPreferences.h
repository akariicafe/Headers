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
+ (id)serviceDebuggingPath;
+ (id)preferencesWithPersistence:(id)a0;
+ (id)userDefaultsPersistence;
+ (id)sharedPreferences;
+ (id)readInternalDefaultValueForKey:(id)a0;

- (BOOL)serviceDebugging;
- (id)UUID;
- (void)setDefaultCities:(id)a0;
- (void)resetLocale;
- (void)setCelsius:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithPersistence:(id)a0;
- (id)init;
- (id)_cacheDirectoryPath;
- (id)readInternalDefaultValueForKey:(id)a0;
- (void)temperatureUnitObserver:(id)a0 didChangeTemperatureUnitTo:(int)a1;
- (BOOL)isCelsius;
- (id)loadSavedCities;
- (id)readDefaultValueForKey:(id)a0;
- (void)writeDefaultValue:(id)a0 forKey:(id)a1;
- (void)synchronizeStateToDisk;
- (void)saveToDiskWithLocalWeatherCity:(id)a0;
- (void)saveToDiskWithCities:(id)a0;
- (void)saveToDiskWithCities:(id)a0 activeCity:(unsigned long long)a1;
- (id)_defaultCities;
- (BOOL)areCitiesDefault:(id)a0;
- (void)setupUbiquitousStoreIfNeeded;
- (void)setDefaultSelectedCityID:(id)a0;
- (void)synchronizeStateToDiskDoNotify:(BOOL)a0;
- (BOOL)_defaultsCurrent;
- (id)cityFromPreferencesDictionary:(id)a0;
- (id)preferencesDictionaryForCity:(id)a0;
- (BOOL)_defaultsAreValid;
- (id)citiesByConsolidatingDuplicates:(id)a0 originalOrder:(id)a1;
- (int)loadActiveCity;
- (void)setActiveCity:(unsigned long long)a0;
- (id)citiesByConsolidatingDuplicatesInBucket:(id)a0;
- (void)saveToUbiquitousStore;
- (BOOL)ensureValidSelectedCityID;
- (void)adjustPrefsForLocalWeatherEnabled:(BOOL)a0;
- (void)registerTemperatureUnits;
- (BOOL)readTemperatureUnits;
- (void)saveToDiskWithCity:(id)a0 forActiveIndex:(unsigned long long)a1;
- (int)loadDefaultSelectedCity;
- (id)loadDefaultSelectedCityID;
- (void)setDefaultSelectedCity:(unsigned long long)a0;
- (void)forceSyncCloudPreferences;
- (id)twcLogoURL;
- (id)twcLogoURL:(id)a0;
- (void)_clearCachedObjects;

@end
