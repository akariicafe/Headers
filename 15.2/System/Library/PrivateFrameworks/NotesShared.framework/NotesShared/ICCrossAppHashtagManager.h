@interface ICCrossAppHashtagManager : NSObject

+ (id)hashtagDisplayTextsFromOtherApps;
+ (id)bundleIDsForHashtagSupportingAppsOtherThanNotes;
+ (void)updateUserDefaultsCacheIfNecessaryWithNewlyFetchedHastags:(id)a0;
+ (void)prefetchHashtagDisplayTextsFromOtherApps;

@end
