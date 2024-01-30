@class WorldClockPreferences, NSMutableArray, NSDate;

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSMutableArray *cities;

+ (id)sharedManagerWithPreferences:(id)a0;
+ (id)sharedManager;

- (BOOL)canAddCity;
- (BOOL)checkIfCitiesModified;
- (void)removeAllCities;
- (unsigned long long)addCity:(id)a0;
- (id)fixUpCityProperties:(id)a0;
- (id)updatedTimezoneForCityWithID:(id)a0;
- (id)worldClockCityFromPersistenceRepresentation:(id)a0;
- (void)moveCityFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)pushCityPropertiesToPreferences;
- (id)allCities;
- (void)removeCityAtIndex:(unsigned long long)a0;
- (id)initWithPreferences:(id)a0;
- (id)worldClockCityFromPersistenceArray:(id)a0;
- (void)removeCity:(id)a0;
- (id)updatedDataForCityWithID:(id)a0;
- (id)cityWithIdUrl:(id)a0;
- (void)_notifyNano;
- (void)saveCities;
- (void)addDefaultCitiesIfNeeded;
- (void).cxx_destruct;
- (id)citiesMatchingName:(id)a0;
- (void)loadCities;
- (id)updateALDataWithCity:(id)a0;
- (id)worldClockCityFromPersistenceDictionary:(id)a0;
- (id)citiesMatchingIdentifiers:(id)a0;

@end
