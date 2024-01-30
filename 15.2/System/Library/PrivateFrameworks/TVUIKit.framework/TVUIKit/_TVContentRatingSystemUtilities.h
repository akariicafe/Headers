@interface _TVContentRatingSystemUtilities : NSObject

+ (BOOL)_isRatingSystemForMovies:(long long)a0;
+ (BOOL)_isRatingSystemForTV:(long long)a0;
+ (id)stringForRatingSystem:(long long)a0;
+ (BOOL)_isRatingSystemForMusic:(long long)a0;
+ (long long)ratingSystemForString:(id)a0;
+ (long long)ratingSystemKindForRatingSystem:(long long)a0;
+ (id)_ratingSystemLookUpDictionary;
+ (id)_cleanedRatingSystem:(id)a0;
+ (id)_ratingSystemStringLookUpDictionary;

@end
