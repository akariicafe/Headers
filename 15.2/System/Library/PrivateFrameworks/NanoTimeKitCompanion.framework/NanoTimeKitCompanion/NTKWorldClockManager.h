@class NSArray, WorldClockManager;

@interface NTKWorldClockManager : NSObject {
    WorldClockManager *_frameworkManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _frameworkLock;
}

@property (readonly, nonatomic) NSArray *cities;

+ (id)sharedManager;

- (BOOL)checkIfCitiesModified;
- (BOOL)canAddCity;
- (void)loadCities;
- (void).cxx_destruct;
- (void)saveCities;
- (id)init;
- (unsigned long long)addCity:(id)a0;

@end
