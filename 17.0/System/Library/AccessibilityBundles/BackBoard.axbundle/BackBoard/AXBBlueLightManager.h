@class CBClient;

@interface AXBBlueLightManager : NSObject {
    CBClient *_brightnessClient;
    BOOL _blueLightStatusEnabled;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)disableBrightnessFilters;
- (void)restoreCachedBrightnessFilters;
- (BOOL)brightnessFiltersEnabled;
- (BOOL)supportsBlueLightReduction;
- (BOOL)supportsAdaptation;
- (void).cxx_destruct;
- (BOOL)blueLightStatusEnabled;
- (BOOL)adaptationEnabled;

@end
