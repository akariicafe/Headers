@class WorldClockPreferences, NSMutableArray, NSDate;

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSMutableArray *cities;

+ (id)sharedManager;
+ (id)sharedManagerWithPreferences:(id)a0;

- (BOOL)checkIfCitiesModified;
- (id)worldClockCityFromPersistenceRepresentation:(id)a0;
- (void)removeCityAtIndex:(unsigned long long)a0;
- (BOOL)canAddCity;
- (id)allCities;
- (id)initWithPreferences:(id)a0;
- (void)removeCity:(id)a0;
- (void)loadCities;
- (void)removeAllCities;
- (void)_notifyNano;
- (id)worldClockCityFromPersistenceDictionary:(id)a0;
- (void).cxx_destruct;
- (id)worldClockCityFromPersistenceArray:(id)a0;
- (void)saveCities;
- (id)fixUpCityProperties:(id)a0;
- (void)addDefaultCitiesIfNeeded;
- (id)citiesMatchingName:(id)a0;
- (void)moveCityFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)citiesMatchingIdentifiers:(id)a0;
- (id)cityWithIdUrl:(id)a0;
- (void)pushCityPropertiesToPreferences;
- (unsigned long long)addCity:(id)a0;

@end
