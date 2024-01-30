@class NSString, NSURL, CPSClipMetadata, NSNumber, CPSSessionConfiguration;
@protocol CPSSessionProxyDelegate;

@interface CPSSessionProxy : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mutableIvarLock;
    BOOL _isCheckingAppAttributionBannerCanShow;
    id /* block */ _showAppAttributionBannerCallback;
}

@property (weak, nonatomic) id<CPSSessionProxyDelegate> delegate;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) CPSClipMetadata *metadata;
@property (readonly, nonatomic) NSNumber *estimatedProgress;
@property (readonly, nonatomic) NSURL *applicationIconFileURL;
@property (readonly, nonatomic) NSURL *heroImageFileURL;
@property (nonatomic) BOOL usedByPPT;
@property (nonatomic) BOOL originIsControlCenter;
@property (readonly, nonatomic, getter=isInvokedByPhysicalCode) BOOL invokedByPhysicalCode;
@property (copy, nonatomic) NSString *launchReason;
@property (copy, nonatomic) NSString *sourceBundleID;
@property (copy, nonatomic) NSString *referrerBundleID;
@property (retain, nonatomic) CPSSessionConfiguration *configuration;
@property (readonly, nonatomic) double appLaunchTime;
@property (readonly, nonatomic) NSURL *businessIconURL;

- (id)initWithURL:(id)a0;
- (void)disconnect;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)cancel;
- (void)prewarmClipWithCompletionHandler:(id /* block */)a0;
- (void)didUpdateMetadata:(id)a0;
- (void)didFinishLoadingWithError:(id)a0;
- (void)didUpdateInstallProgress:(id)a0;
- (void)didInstallApplicationPlaceholder;
- (void)didRetrieveApplicationIcon:(id)a0;
- (void)didRetrieveHeroImage:(id)a0;
- (void)didFinishTestingAtTime:(double)a0;
- (void)didRetrieveBusinessIcon:(id)a0;
- (void)connectToService;
- (void)installClipWithCompletion:(id /* block */)a0;
- (void)notifyWebClipActivationWithBundleID:(id)a0 referrerBundleID:(id)a1;
- (void)_checkAndConsumeShowsAppAttributionBannerIfNeeded;
- (void)prewarmClip;
- (void)fetchClipMetadataAndImages;
- (void)installClip;
- (void)openClipWithLaunchOptions:(id)a0 completion:(id /* block */)a1;
- (void)getLastLaunchOptionsWithCompletion:(id /* block */)a0;
- (void)checkAndConsumeShowsAppAttributionBannerWithCompletion:(id /* block */)a0;
- (void)didDetermineAvailability:(BOOL)a0;
- (void)remoteServiceDidCrash;

@end
