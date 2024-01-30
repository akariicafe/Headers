@class NSString, NSSet, MTSyncInfo;

@interface MTPodcast : NSManagedObject

@property (readonly, nonatomic) BOOL sortAscending;
@property (readonly, nonatomic) BOOL isExplicit;
@property (readonly, nonatomic) BOOL playbackNewestToOldest;
@property (nonatomic) double addedDate;
@property (retain, nonatomic) NSString *author;
@property (nonatomic) int autoDownloadType;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) long long darkCount;
@property (nonatomic) long long darkCountLocal;
@property (nonatomic) long long deletePlayedEpisodes;
@property (nonatomic) double downloadedDate;
@property (nonatomic) long long episodeLimit;
@property (retain, nonatomic) NSString *feedURL;
@property (nonatomic) long long flags;
@property (nonatomic) BOOL hidden;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSString *itemDescription;
@property (nonatomic) double lastDatePlayed;
@property (nonatomic) double lastTouchDate;
@property (nonatomic) BOOL notifications;
@property (nonatomic) BOOL orphanedFromCloud;
@property (nonatomic) long long podcastPID;
@property (retain, nonatomic) NSString *provider;
@property (nonatomic) BOOL showPlacardForOrphanedFromCloud;
@property (nonatomic) BOOL showPlacardForRemovePlayedEpisodes;
@property (nonatomic) BOOL showPlacardForSavedEpisodes;
@property (nonatomic) long long sortOrder;
@property (nonatomic) long long storeCollectionId;
@property (retain, nonatomic) NSString *storeCleanURL;
@property (retain, nonatomic) NSString *storeShortURL;
@property (nonatomic) double lastStoreEpisodesInfoCheckDate;
@property (nonatomic) double lastStorePodcastInfoCheckDate;
@property (nonatomic) BOOL subscribed;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double updateAvg;
@property (nonatomic) double updatedDate;
@property (retain, nonatomic) NSString *updatedFeedURL;
@property (nonatomic) long long updateInterval;
@property (nonatomic) double updateStdDev;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSSet *episodes;
@property (retain, nonatomic) NSSet *playlists;
@property (retain, nonatomic) NSSet *playlistSettings;
@property (retain, nonatomic) MTSyncInfo *syncInfo;
@property (retain, nonatomic) NSString *showTypeInFeed;
@property (nonatomic) long long showTypeSetting;
@property (retain, nonatomic) NSString *nextEpisodeUuid;
@property (nonatomic) double modifiedDate;
@property (retain, nonatomic) NSString *webpageURL;
@property (nonatomic) double feedChangedDate;
@property (readonly, nonatomic) BOOL autoDownload;
@property (nonatomic) long long keepEpisodes;

+ (int)autoDownloadDefaultValue;
+ (long long)episodeLimitDefaultValue;
+ (long long)deletePlayedEpisodesDefaultValue;
+ (id)_defaultsForLoadingDefaultValues;
+ (long long)updateIntervalDefaultValue;
+ (double)timeIntervalForUpdate:(long long)a0;
+ (long long)updateIntervalSettingForTimeInterval:(double)a0;

- (void)setPodcastPID:(long long)a0;
- (id)displayURL;
- (int)autoDownloadResolvedValue;
- (long long)episodeLimitResolvedValue;
- (BOOL)deletePlayedEpisodesResolvedValue;
- (long long)mt_syncID;

@end
