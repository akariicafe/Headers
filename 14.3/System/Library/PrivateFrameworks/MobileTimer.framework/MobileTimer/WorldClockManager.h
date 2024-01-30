@class WorldClockPreferences, NSMutableArray, NSDate;

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSMutableArray *cities;

+ (id)sharedManagerWithPreferences:(id)a0;
+ (id)sharedManager;

- (void)addDefaultCitiesIfNeeded;
- (unsigned long long)addCity:(id)a0;
- (void).cxx_destruct;
- (void)removeAllCities;
- (id)worldClockCityFromPersistenceArray:(id)a0;
- (id)citiesMatchingName:(id)a0;
- (BOOL)canAddCity;
- (id)cityWithIdUrl:(id)a0;
- (void)moveCityFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)pushCityPropertiesToPreferences;
- (id)citiesMatchingIdentifiers:(id)a0;
- (id)worldClockCityFromPersistenceRepresentation:(id)a0;
- (void)saveCities;
- (void)removeCity:(id)a0;
- (id)initWithPreferences:(id)a0;
- (BOOL)checkIfCitiesModified;
- (void)_notifyNano;
- (id)fixUpCityProperties:(id)a0;
- (void)loadCities;
- (void)removeCityAtIndex:(unsigned long long)a0;
- (id)allCities;
- (id)worldClockCityFromPersistenceDictionary:(id)a0;

@end
