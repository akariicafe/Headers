@interface ICCrossAppHashtagManager : NSObject

+ (id)bundleIDsForHashtagSupportingAppsOtherThanNotes;
+ (id)hashtagDisplayTextsFromOtherApps;
+ (void)prefetchHashtagDisplayTextsFromOtherApps;
+ (void)updateUserDefaultsCacheIfNecessaryWithNewlyFetchedHastags:(id)a0;

@end
