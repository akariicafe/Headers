@class NSString;

@interface MTSyncUtil : NSObject

@property (class, retain, nonatomic) NSString *podcastsDomainVersion;

+ (id)userDefaultsKeyForSubscriptionSyncType:(long long)a0;
+ (id)userDefaultsKeyForBookmarksSyncType:(long long)a0;
+ (void)setSubscriptionSyncDirtyFlag:(BOOL)a0 syncType:(long long)a1;
+ (BOOL)subscriptionSyncDirtyFlagForSyncType:(long long)a0;
+ (void)setPlaylistSyncDirtyFlag:(BOOL)a0;
+ (BOOL)playlistSyncDirtyFlag;
+ (void)setBookmarksSyncDirtyFlag:(BOOL)a0 syncType:(long long)a1;
+ (BOOL)bookmarksSyncDirtyFlagForSyncType:(long long)a0;
+ (BOOL)isSubscriptionSyncEnabled;
+ (long long)syncTypeFromEpisode:(id)a0;

@end
