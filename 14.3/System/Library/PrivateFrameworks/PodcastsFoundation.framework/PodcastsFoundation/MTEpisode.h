@class MTPodcast, NSString, NSSet, MTSyncInfo, NSData, NSAttributedString;

@interface MTEpisode : NSManagedObject

@property (retain, nonatomic) NSString *assetURL;
@property (nonatomic) BOOL audio;
@property (nonatomic) BOOL saved;
@property (retain, nonatomic) NSString *author;
@property (nonatomic) long long byteSize;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *cleanedTitle;
@property (nonatomic) double downloadDate;
@property (retain, nonatomic) NSString *downloadPath;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSString *enclosureURL;
@property (nonatomic) long long episodeLevel;
@property (nonatomic) BOOL explicit;
@property (nonatomic) BOOL externalType;
@property (nonatomic) BOOL feedDeleted;
@property (nonatomic) long long flags;
@property (nonatomic) BOOL isFromITunesSync;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) int importSource;
@property (nonatomic) double importDate;
@property (nonatomic) BOOL isNew;
@property (retain, nonatomic) NSString *itemDescription;
@property (nonatomic) BOOL itemDescriptionHasHTML;
@property (retain, nonatomic) NSAttributedString *itemDescriptionWithHTML;
@property (retain, nonatomic) NSString *itemDescriptionWithoutHTML;
@property (nonatomic) double lastDatePlayed;
@property (nonatomic) double lastUserMarkedAsPlayedDate;
@property (retain, nonatomic) NSString *metadataIdentifier;
@property (nonatomic) double metadataTimestamp;
@property (nonatomic) BOOL metadataFirstSyncEligible;
@property (nonatomic) long long persistentID;
@property (nonatomic) long long playCount;
@property (nonatomic) float playhead;
@property (nonatomic) BOOL backCatalog;
@property (readonly, nonatomic) long long playState;
@property (readonly, nonatomic) long long playStateSource;
@property (readonly, nonatomic) BOOL playStateManuallySet;
@property (nonatomic) double playStateLastModifiedDate;
@property (retain, nonatomic) NSString *podcastUuid;
@property (nonatomic) double pubDate;
@property (nonatomic) BOOL sentNotification;
@property (nonatomic) long long storeTrackId;
@property (nonatomic) BOOL suppressAutoDownload;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long trackNum;
@property (nonatomic) BOOL unplayedTab;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL video;
@property (retain, nonatomic) NSSet *playlists;
@property (retain, nonatomic) MTPodcast *podcast;
@property (retain, nonatomic) NSSet *settings;
@property (retain, nonatomic) MTSyncInfo *syncInfo;
@property (nonatomic) BOOL userEpisode;
@property (nonatomic) BOOL listenNowEpisode;
@property (retain, nonatomic) NSString *itunesTitle;
@property (retain, nonatomic) NSString *itunesSubtitle;
@property (nonatomic) long long seasonNumber;
@property (nonatomic) long long episodeNumber;
@property (retain, nonatomic) NSString *episodeType;
@property (retain, nonatomic) NSString *webpageURL;
@property (retain, nonatomic) NSData *securityScopedAssetData;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL userDeleted;
@property (nonatomic) BOOL manuallyAdded;
@property (nonatomic) BOOL hasBeenPlayed;

+ (id)propertiesToFetchIsBackCatalogItem;
+ (id)propertiesToFetchIsPlayed;
+ (id)propertiesToFetchIsPlayheadPartiallyPlayed;
+ (double)endOfTrackForDuration:(double)a0;
+ (BOOL)isPlayhead:(double)a0 resumableForDuration:(double)a1;
+ (id)propertyPathForPodcastProperty:(id)a0;
+ (id)propertiesToFetchBestTitle;
+ (id)propertiesToFetchIsPartiallyPlayed;
+ (id)propertiesToFetchIsVisuallyPlayed;
+ (id)propertiesToFetchIsPartiallyPlayedBackCatalogItem;
+ (id)propertiesToFetchPlaybackProgress;
+ (id)propertiesToFetchTimeRemaining;
+ (id)propertiesToFetchAssetURL;
+ (id)propertiesToFetchIsExplicit;
+ (id)relationshipKeyPathsForPrefetchingIsExplicit;

- (void)setEpisodeNumber:(long long)a0;
- (void)setEpisodeType:(id)a0;
- (void)setWebpageURL:(id)a0;
- (void)setSeasonNumber:(long long)a0;
- (BOOL)isPlayed;
- (void)setPersistentID:(long long)a0;
- (void)setExplicit:(BOOL)a0;
- (BOOL)isDownloaded;
- (BOOL)isVideo;
- (BOOL)isMedia;
- (BOOL)isAudio;
- (BOOL)isExplicit;
- (double)playbackProgress;
- (id)playURL;
- (void)setIsNew:(BOOL)a0;
- (void)setAssetURL:(id)a0;
- (id)bestUrl;
- (BOOL)isBonus;
- (id)assetURL;
- (double)timeRemaining;
- (void)setDuration:(double)a0;
- (id)displayURL;
- (long long)mt_syncID;
- (id)bestTitle;
- (BOOL)isBackCatalogItem;
- (BOOL)isPlayheadPartiallyPlayed;
- (void)_setAssetUrl:(id)a0;
- (long long)episodeTypeResolvedValue;
- (void)setFeedDeleted:(BOOL)a0;
- (void)setCleanedTitle:(id)a0;
- (void)setByteSize:(long long)a0;
- (void)setEnclosureURL:(id)a0;
- (void)setPodcastUuid:(id)a0;
- (void)setEpisodeLevel:(long long)a0;
- (void)setItunesTitle:(id)a0;
- (void)setTrackNum:(long long)a0;
- (void)setPubDate:(double)a0;
- (id)numberedTitle;
- (id)bestSummary;
- (BOOL)isPartiallyPlayed;
- (BOOL)isUnplayed;
- (BOOL)isVisuallyPlayed;
- (BOOL)isPartiallyPlayedBackCatalogItem;
- (double)endOfTrack;
- (BOOL)isPlayheadResumable;
- (BOOL)isTrailer;
- (BOOL)isExternalType;
- (BOOL)isTopLevel;
- (void)setIsTopLevel:(BOOL)a0;

@end
