@class NSError, NSString, NSURL, VUIStoreDownloadMonitor, NSDictionary, VUIStoreFPSKeyLoader, NSObject, NSNumber;

@interface VUIStoreMediaItem_iOS : VUILibraryMediaItem_iOS <TVPMediaItemReportingDelegate, TVPContentKeyLoading, VUIStoreFPSKeyLoaderDelegate>

@property (nonatomic) unsigned long long loadingContext;
@property (retain, nonatomic) NSDictionary *sinfsDict;
@property (retain, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) NSURL *downloadDestinationURL;
@property (retain, nonatomic) NSNumber *downloadToken;
@property (retain, nonatomic) VUIStoreFPSKeyLoader *storeFPSKeyLoader;
@property (nonatomic) long long playbackType;
@property (retain, nonatomic) NSURL *playbackURL;
@property (retain, nonatomic) VUIStoreDownloadMonitor *downloadMonitor;
@property (nonatomic) BOOL needsRentalCheckin;
@property (retain, nonatomic) NSObject *parentReportingToken;
@property (retain, nonatomic) NSError *fpsKeyError;
@property (nonatomic) BOOL needsRentalCheckoutPriorToPlayback;
@property (nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSURL *fpsCertificateURL;
@property (copy, nonatomic) NSURL *fpsKeyServerURL;
@property (copy, nonatomic) NSDictionary *fpsAdditionalServerParams;
@property (nonatomic) BOOL isBingeWatched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_rentalExpirationDate;
- (void)storeFPSKeyLoader:(id)a0 didReceiveUpdatedRentalExpirationDate:(id)a1 playbackStartDate:(id)a2;
- (void)storeFPSKeyLoader:(id)a0 didLoadOfflineKeyData:(id)a1 forKeyRequest:(id)a2;
- (void)storeFPSKeyLoader:(id)a0 willFailWithError:(id)a1 forKeyRequest:(id)a2;
- (id)mediaItemMetadataForProperty:(id)a0;
- (id)initWithMPMediaItem:(id)a0;
- (id)initWithAdamID:(long long)a0;
- (id)mediaItemURL;
- (BOOL)hasTrait:(id)a0;
- (id)_hlsURLEnsuringDsidQueryParamIsPresentFromURL:(id)a0;
- (void)_externalPlaybackTypeDidChange:(id)a0;
- (BOOL)_loadingCancelled:(unsigned long long)a0;
- (void)prepareForLoadingWithCompletion:(id /* block */)a0;
- (void)cleanUpMediaItem;
- (BOOL)shouldRetryPlaybackForError:(id)a0;
- (void)loadFairPlayStreamingKeyRequests:(id)a0;
- (id)_adamIDString;
- (id)_iTunesStoreContentInfo;
- (id)_videoPlaybackTypeDescription;
- (void)_configureForStreamingPlaybackWithCompletion:(id /* block */)a0;
- (void)_configureForLocalPlaybackWithURL:(id)a0 completion:(id /* block */)a1;
- (id)_downloadForThisMediaItemReturningDownloadManager:(id *)a0;
- (void)_configureForPlaybackFromExistingDownload:(id)a0 downloadManager:(id)a1 completion:(id /* block */)a2;
- (void)_checkoutRentalWithCheckoutType:(unsigned long long)a0 startPlaybackClock:(BOOL)a1 completion:(id /* block */)a2;
- (void)_checkInRental;
- (void)_deleteDownloadKeyCookieForURL:(id)a0;
- (void)_updateRentalPlaybackStartDate:(id)a0;
- (id)_offlineKeyDataForKeyRequest:(id)a0;
- (void)_persistOfflineKeyData:(id)a0 forKeyRequest:(id)a1;
- (void)_setDownloadKeyCookieWithURL:(id)a0 downloadKey:(id)a1;
- (void)_performStreamingRedownloadWithCompletion:(id /* block */)a0;
- (id)_iTunesStoreContentPurchasedMediaKind;
- (id)_rentalPlaybackEndDate;
- (id)_rentalEndDate;
- (void)mediaItemAllInitialLoadingComplete:(id)a0 totalTime:(double)a1 player:(id)a2;
- (void)prepareForPlaybackInitiationWithCompletion:(id /* block */)a0;
- (id)replacementErrorForPlaybackError:(id)a0;
- (id)reportingDelegate;

@end
