@class NSString, CPSSessionProxy;

@interface CPSClipRequest : NSObject <CPSSessionProxyDelegate> {
    CPSSessionProxy *_sessionProxy;
    id /* block */ _completionHandler;
    BOOL _shouldOpenClipWhenMetadataIsUpdated;
}

@property (nonatomic) BOOL shouldReturnErrorOnUserCancellation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)confirmLocationWithURL:(id)a0 inRegion:(id)a1 completion:(id /* block */)a2;
+ (void)deleteClipsWithBundleIDs:(id)a0 completion:(id /* block */)a1;
+ (void)getLocationConfirmationConsentForBundleID:(id)a0 completion:(id /* block */)a1;
+ (void)getUserNotificationConsentForBundleID:(id)a0 completion:(id /* block */)a1;

- (id)initWithURL:(id)a0;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)requestClipWithCompletion:(id /* block */)a0;
- (id)initWithURL:(id)a0 fallbackClipBundleID:(id)a1;
- (id)sessionProxy;
- (void)proxy:(id)a0 didDetermineAvailability:(BOOL)a1;
- (void)proxy:(id)a0 didFinishLoadingWithError:(id)a1;
- (void)proxyAppDidLaunchForTesting:(id)a0;
- (void)proxyDidUpdateMetadata:(id)a0;
- (void)proxyRemoteServiceDidCrash:(id)a0;
- (id)_errorIgnoringUserCancelledErrorIfNeeded:(id)a0;
- (void)_openClipWithInvocationUI;
- (void)installClipWithBundleID:(id)a0 completion:(id /* block */)a1;

@end
