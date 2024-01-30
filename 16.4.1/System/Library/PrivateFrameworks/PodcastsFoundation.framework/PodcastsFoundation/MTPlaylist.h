@class NSString, NSSet, NSOrderedSet, MTSyncInfo, MTPodcastPlaylistSettings;

@interface MTPlaylist : NSManagedObject

@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isITunesPlaylist;
@property (nonatomic) int containerOrder;
@property (nonatomic) long long downloadedCount;
@property (nonatomic) long long flags;
@property (nonatomic) double generatedDate;
@property (nonatomic) BOOL hidden;
@property (nonatomic) long long mediaLibraryId;
@property (nonatomic) long long parentMediaLibraryId;
@property (nonatomic) long long sortOrder;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long unplayedCount;
@property (nonatomic) double updatedDate;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSSet *addedEpisodes;
@property (retain, nonatomic) MTPodcastPlaylistSettings *defaultSettings;
@property (retain, nonatomic) NSSet *deletedEpisodes;
@property (retain, nonatomic) NSOrderedSet *episodes;
@property (retain, nonatomic) NSOrderedSet *podcasts;
@property (retain, nonatomic) NSOrderedSet *settings;
@property (retain, nonatomic) MTSyncInfo *syncInfo;

+ (id)sortDescriptors;
+ (id)predicateForIsHidden:(BOOL)a0;
+ (id)predicateForStationUUID:(id)a0;
+ (id)propertiesToObserveForDownloadableEpisodes;
+ (id)topLevelPlaylistsPredicate;

- (BOOL)needsUpdate;
- (void)setNeedsUpdate:(BOOL)a0;
- (long long)mt_syncID;
- (void)setMediaLibraryId:(long long)a0;

@end
