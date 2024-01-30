@class CPSClipMetadata, NSString, NSURL, CPSClipLaunchOptions, NSError, CPSPromise, CPSImageLoader, NSObject, NSMutableArray, CPSSessionConfiguration, NSNumber;
@protocol CPSBusinessItemFetching, OS_dispatch_queue, CPSAppInfoFetching;

@interface CPSSession : NSObject <CPSInstallationControllerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_proxyObjects;
    CPSImageLoader *_imageLoader;
    NSURL *_applicationIconFileURL;
    NSURL *_heroImageFileURL;
    NSURL *_businessIconFileURL;
    long long _clipAvailabilityState;
    long long _installationState;
    long long _metadataFetchState;
    NSError *_metadataFetchError;
    BOOL _didFetchApplicationIcon;
    id /* block */ _metadataCompletion;
    id /* block */ _applicationIconFetchCompletion;
    CPSPromise *_businessIconFetchingPromise;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *applicationIconFileURL;
@property (readonly, nonatomic) CPSClipMetadata *metadata;
@property (readonly, nonatomic) NSNumber *estimatedProgress;
@property (retain, nonatomic) id<CPSAppInfoFetching> appInfoFetcher;
@property (retain, nonatomic) id<CPSBusinessItemFetching> businessItemFetcher;
@property (readonly, nonatomic) BOOL registeredForTest;
@property (readonly, nonatomic) NSString *logID;
@property (readonly, copy, nonatomic) CPSClipLaunchOptions *launchOptions;
@property (retain, nonatomic) CPSSessionConfiguration *configuration;
@property (readonly, nonatomic, getter=isPurgeable) BOOL purgeable;
@property (nonatomic, getter=isOpeningWebClipFromDaemon) BOOL openingWebClipFromDaemon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_evictFromCache;
- (id)_availabilityOptions;
- (void)_didDetermineAvailability:(BOOL)a0;
- (void)_didFetchBusinessIconWithURL:(id)a0;
- (void)_didFinishLoadingWithError:(id)a0;
- (void)_didUpdateMetadata:(id)a0;
- (void)_fetchAppMetadataWithBundleID:(id)a0 url:(id)a1 accountInvocationPolicy:(id)a2;
- (void)_fetchBusinessIconIfNeeded;
- (void)_fetchBusinessMetadata;
- (void)_fetchParentApplicationMetadataWithBundleID:(id)a0;
- (void)_notifyObserversOfMetadataFetchResultUpdates:(id)a0;
- (void)_retrieveApplicationIconWithAppIconURL:(id)a0 clipBundleID:(id)a1;
- (void)_retrieveApplicationIconWithCompletionHandler:(id /* block */)a0;
- (void)_retrieveHeroImageWithHeroImageURL:(id)a0;
- (void)_retrieveImageWithURL:(id)a0 didFetchImage:(BOOL *)a1 fileURL:(id *)a2 fetchCompletion:(id /* block */)a3 proxyCompletion:(id /* block */)a4;
- (id)_retrieveInstalledApplicationIconWithAppIconURL:(id)a0 clipBundleID:(id)a1;
- (void)_updateEntryPointForWebClip:(id)a0;
- (void)_updateLocationConfirmationForRecord:(id)a0 permissionGranted:(id)a1;
- (void)_updateWebClipIcon:(id)a0 metadata:(id)a1;
- (void)addRemoteObjectProxy:(id)a0;
- (BOOL)checkAndConsumeShowsAppAttributionBannerLaunchOption;
- (void)clearMetadataAndRefetch;
- (void)didCompleteTestSessionAtTime:(double)a0;
- (void)fetchHeroImage;
- (void)fetchMetadataWithCompletion:(id /* block */)a0;
- (id)initWithURL:(id)a0 usingQueue:(id)a1;
- (id)initWithURL:(id)a0 usingQueue:(id)a1 configuration:(id)a2;
- (void)installationController:(id)a0 didFinishWithError:(id)a1;
- (void)installationController:(id)a0 didUpdateProgress:(double)a1;
- (void)installationControllerDidInstallPlaceholder:(id)a0;
- (void)installationControllerWillStartInstall:(id)a0;
- (void)removeRemoteObjectProxy:(id)a0;
- (void)setPreloadedMetadata:(id)a0;
- (void)updateClipDataForEntryPointWithWebClip:(id)a0 launchOptions:(id)a1;

@end
