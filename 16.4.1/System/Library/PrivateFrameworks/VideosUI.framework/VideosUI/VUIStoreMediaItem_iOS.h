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

- (void)dealloc;
- (void).cxx_destruct;
- (id)_rentalExpirationDate;
- (id)initWithAdamID:(long long)a0;
- (void)_deleteDownloadKeyCookieForURL:(id)a0;
- (void)_externalPlaybackTypeDidChange:(id)a0;
- (void)_updateRentalPlaybackStartDate:(id)a0;
- (id)_adamIDString;
- (void)_checkInRental;
- (void)_checkoutRentalWithCheckoutType:(unsigned long long)a0 startPlaybackClock:(BOOL)a1 completion:(id /* block */)a2;
- (void)_configureForLocalPlaybackWithURL:(id)a0 completion:(id /* block */)a1;
- (void)_configureForPlaybackFromExistingDownload:(id)a0 downloadManager:(id)a1 completion:(id /* block */)a2;
- (void)_configureForStreamingPlaybackWithCompletion:(id /* block */)a0;
- (id)_downloadForThisMediaItemReturningDownloadManager:(id *)a0;
- (id)_hlsURLEnsuringDsidQueryParamIsPresentFromURL:(id)a0;
- (id)_iTunesStoreContentInfo;
- (id)_iTunesStoreContentPurchasedMediaKind;
- (BOOL)_loadingCancelled:(unsigned long long)a0;
- (id)_offlineKeyDataForKeyRequest:(id)a0;
- (void)_performStreamingRedownloadWithCompletion:(id /* block */)a0;
- (void)_persistOfflineKeyData:(id)a0 forKeyRequest:(id)a1;
- (id)_rentalEndDate;
- (id)_rentalPlaybackEndDate;
- (void)_setDownloadKeyCookieWithURL:(id)a0 downloadKey:(id)a1;
- (id)_videoPlaybackTypeDescription;
- (void)cleanUpMediaItem;
- (BOOL)hasTrait:(id)a0;
- (id)initWithMPMediaItem:(id)a0;
- (void)loadFairPlayStreamingKeyRequests:(id)a0;
- (void)mediaItemAllInitialLoadingComplete:(id)a0 totalTime:(double)a1 player:(id)a2;
- (id)mediaItemMetadataForProperty:(id)a0;
- (id)mediaItemURL;
- (void)prepareForLoadingWithCompletion:(id /* block */)a0;
- (void)prepareForPlaybackInitiationWithCompletion:(id /* block */)a0;
- (id)replacementErrorForPlaybackError:(id)a0;
- (id)reportingDelegate;
- (BOOL)shouldRetryPlaybackForError:(id)a0;
- (void)storeFPSKeyLoader:(id)a0 didLoadOfflineKeyData:(id)a1 forKeyRequest:(id)a2;
- (void)storeFPSKeyLoader:(id)a0 didReceiveUpdatedRentalExpirationDate:(id)a1 playbackStartDate:(id)a2;
- (void)storeFPSKeyLoader:(id)a0 willFailWithError:(id)a1 forKeyRequest:(id)a2;

@end
