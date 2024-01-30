@class VUIVideoManagedObject, VUISidebandMediaItemAssetController;

@interface VUISidebandMediaItem : VUIMediaItem <VUISidebandMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObject;
@property (retain, nonatomic) VUISidebandMediaItemAssetController *assetController;

- (id)episodeNumber;
- (id)releaseDate;
- (id)seasonNumber;
- (id)isPlayable;
- (id)showTitle;
- (id)storeID;
- (id)addedDate;
- (id)duration;
- (void)dealloc;
- (id)isLocal;
- (id)title;
- (id)availabilityEndDate;
- (void).cxx_destruct;
- (id)brandName;
- (id)brandID;
- (id)canonicalID;
- (id)seasonTitle;
- (id)colorCapability;
- (BOOL)markedAsDeleted;
- (id)HLSColorCapability;
- (id)showCanonicalID;
- (void)_videoManagedObjectPlaybackExpirationWillChange:(id)a0;
- (BOOL)allowsManualDownloadRenewal;
- (id)downloadExpirationDate;
- (id)episodeIndexInSeries;
- (id)fractionalEpisodeNumber;
- (id)genreTitle;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 videoManagedObject:(id)a1 requestedProperties:(id)a2;
- (BOOL)renewsOfflineKeysAutomatically;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)showIdentifier;

@end
