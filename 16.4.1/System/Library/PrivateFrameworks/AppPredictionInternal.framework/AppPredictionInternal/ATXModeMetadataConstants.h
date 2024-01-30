@class NSDictionary;

@interface ATXModeMetadataConstants : NSObject {
    NSDictionary *_appCategoryScores_V1;
    NSDictionary *_appCategoryScores_V2;
    NSDictionary *_parameters;
    NSDictionary *_defaultAppGenreModeAffinities;
    NSDictionary *_defaultAppGenreModeAffinities_v2;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_invertDictionary:(id)a0;
- (void)_populateDefaultAppGenreModeAffinities;
- (void)_populateDefaultAppGenreModeAffinities_v2;
- (id)defaultAppGenreModeAffinities;
- (id)defaultAppGenreModeAffinities_v2;
- (id)getCategoryScoresV1;
- (id)getCategoryScoresV2;

@end
