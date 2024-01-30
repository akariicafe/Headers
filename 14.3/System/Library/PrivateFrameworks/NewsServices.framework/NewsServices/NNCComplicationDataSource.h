@interface NNCComplicationDataSource : NSObject

+ (id)_templateForFamily:(long long)a0 newsStoryResult:(id)a1 compact:(BOOL)a2;
+ (id)_loadingStoriesShortString;
+ (id)_noNewStoriesShortString;
+ (id)imageProviderWithForegroundName:(id)a0 compact:(BOOL)a1;
+ (id)_oneLineHeadlineTextProviderForResult:(id)a0;
+ (id)_complicationTitle;
+ (id)_loadingStoriesLargeString;
+ (id)_noNewStoriesLargeString;
+ (id)fullColorImageProviderWithName:(id)a0;
+ (id)newsTintColor;
+ (id)staticTemplateForFamily:(long long)a0 compact:(BOOL)a1;

@end
