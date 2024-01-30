@class VUIVideoManagedObject, VUISidebandMediaItemAssetController;

@interface VUISidebandMediaItem : VUIMediaItem <VUISidebandMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObject;
@property (retain, nonatomic) VUISidebandMediaItemAssetController *assetController;

- (id)isLocal;
- (id)releaseDate;
- (id)episodeNumber;
- (id)storeID;
- (id)seasonNumber;
- (void).cxx_destruct;
- (id)brandName;
- (void)dealloc;
- (id)canonicalID;
- (id)brandID;
- (id)duration;
- (id)genreTitle;
- (id)isPlayable;
- (id)showTitle;
- (id)addedDate;
- (id)title;
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
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)showIdentifier;
- (id)episodeIndexInSeries;
- (id)seasonTitle;
- (id)initWithMediaLibrary:(id)a0 videoManagedObject:(id)a1 requestedProperties:(id)a2;
- (void)_videoManagedObjectPlaybackExpirationWillChange:(id)a0;

@end
