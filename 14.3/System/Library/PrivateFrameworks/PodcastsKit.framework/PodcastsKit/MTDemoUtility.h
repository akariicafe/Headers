@interface MTDemoUtility : NSObject

+ (BOOL)hasDemoRecentlyPlayedContent;
+ (id)demoRecentlyPlayedContent;
+ (BOOL)hasDemoListenNowData;
+ (id)demoListenNowData;
+ (id)demoSortDescriptorsForRecentlyPlayed;
+ (id)demoSortDescriptorsForListenNow;
+ (id)_dataArrayForString:(id)a0;
+ (id)_dataArrayStringsForString:(id)a0;
+ (unsigned long long)demoListenNowReasonForEpisodeStoreTrackId:(long long)a0;

@end
