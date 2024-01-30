@interface FIUICelebrationAssetLoader : NSObject

+ (id)_movieNameForGoalType:(long long)a0 variantNumber:(unsigned long long)a1;
+ (id)_movieNameForAchievementIdentifier:(id)a0 variantNumber:(unsigned long long)a1;
+ (id)celebrationMovieURLForGoalType:(long long)a0;
+ (id)celebrationMovieURLForAchievementIdentifer:(id)a0;
+ (unsigned long long)_variantCountForGoalType:(long long)a0;

@end
