@class VUIVideoManagedObject, VUISidebandMediaItemAssetController;

@interface VUISidebandMediaItem : VUIMediaItem <VUISidebandMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObject;
@property (retain, nonatomic) VUISidebandMediaItemAssetController *assetController;

- (id)isPlayable;
- (id)seasonNumber;
- (id)isLocal;
- (id)storeID;
- (id)releaseDate;
- (id)episodeNumber;
- (id)addedDate;
- (id)title;
- (id)showTitle;
- (void).cxx_destruct;
- (id)duration;
- (id)brandID;
- (id)brandName;
- (void)dealloc;
- (id)genreTitle;
- (id)canonicalID;
- (id)seasonTitle;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)downloadExpirationDate;
- (BOOL)markedAsDeleted;
- (id)availabilityEndDate;
- (BOOL)renewsOfflineKeysAutomatically;
- (BOOL)allowsManualDownloadRenewal;
- (id)seasonCanonicalID;
- (id)showCanonicalID;
- (id)seasonIdentifier;
- (id)fractionalEpisodeNumber;
- (id)episodeIndexInSeries;
- (id)initWithMediaLibrary:(id)a0 videoManagedObject:(id)a1 requestedProperties:(id)a2;
- (id)showIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (void)_videoManagedObjectPlaybackExpirationWillChange:(id)a0;

@end
