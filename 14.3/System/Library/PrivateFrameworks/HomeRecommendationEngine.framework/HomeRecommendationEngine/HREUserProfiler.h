@class NSDictionary;

@interface HREUserProfiler : NSObject

@property (retain, nonatomic) NSDictionary *attributePrefrences;
@property (retain, nonatomic) NSDictionary *adjustedAttributePrefrences;
@property (nonatomic) double averagePrefrenceScore;
@property (nonatomic) unsigned long long userProficiency;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (id)description;
- (id)getUserPreferencesCategoriesMap;
- (id)getUserAttributePreferences:(id)a0 homeManager:(id)a1;
- (double)getUserAverageAttributePreference:(id)a0;
- (id)getAdjustedUserAttributePreferences:(id)a0;
- (long long)calculateUserProficiency:(id)a0;

@end
