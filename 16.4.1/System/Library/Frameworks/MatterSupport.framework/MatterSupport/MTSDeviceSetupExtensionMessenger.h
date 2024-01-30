@class NSURL, NSMutableSet, NSString;
@protocol MTSDeviceSetupExtension;

@interface MTSDeviceSetupExtensionMessenger : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableSet *pendingRequests;
@property (retain) id<MTSDeviceSetupExtension> extension;
@property (copy) id /* block */ extensionFetchHandler;
@property (readonly, copy) NSURL *containingAppBundleURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)startWithError:(id *)a0;
- (void)addPendingRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainingAppBundleURL:(id)a0;
- (void)_failRequestWithIdentifier:(id)a0 withError:(id)a1;
- (void)_finishRequestWithIdentifier:(id)a0 withExtensionItem:(id)a1;
- (void)configureDeviceWithName:(id)a0 room:(id)a1 completionHandler:(id /* block */)a2;
- (id)dequeuePendingRequestWithIdentifier:(id)a0;
- (void)fetchRoomsInHome:(id)a0 completionHandler:(id /* block */)a1;
- (void)pairDeviceInHome:(id)a0 onboardingPayload:(id)a1 uuid:(id)a2 completionHandler:(id /* block */)a3;
- (void)selectThreadNetworkFromScanResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)selectWiFiNetworkFromScanResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)validateDeviceCredential:(id)a0 completionHandler:(id /* block */)a1;

@end
