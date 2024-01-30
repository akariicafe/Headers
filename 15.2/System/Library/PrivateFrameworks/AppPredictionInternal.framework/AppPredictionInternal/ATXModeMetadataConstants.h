@class NSDictionary;

@interface ATXModeMetadataConstants : NSObject {
    NSDictionary *_parameters;
    NSDictionary *_defaultAppGenreModeAffinities;
    NSDictionary *_defaultAppGenreModeAffinities_v2;
}

+ (id)sharedInstance;
+ (id)developmentWeights;
+ (id)developmentWeights_v2;

- (void).cxx_destruct;
- (id)init;
- (void)_populateDefaultAppGenreModeAffinities;
- (id)_invertDictionary:(id)a0;
- (void)_populateDefaultAppGenreModeAffinities_v2;
- (id)defaultAppGenreModeAffinities;
- (id)defaultAppGenreModeAffinities_v2;

@end
