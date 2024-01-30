@class TVPPlaybackReportingEventCollection, NSError, NSURL, NSString, TVPSecureKeyStandardLoader, NSObject, NSMutableArray, NSNumber, TVPSecureKeyDeliveryCoordinator;
@protocol TVPStoreFPSKeyLoaderDelegate;

@interface TVPStoreFPSKeyLoader : NSObject <TVPSecureKeyDeliveryCoordinatorDelegate, TVPSecureKeyLoaderDelegate>

@property (retain, nonatomic) TVPSecureKeyDeliveryCoordinator *secureKeyDeliveryCoordinator;
@property (retain, nonatomic) TVPSecureKeyStandardLoader *secureKeyStandardLoader;
@property (retain, nonatomic) NSMutableArray *pendingKeyRequests;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) TVPSecureKeyStandardLoader *fpsCertLoader;
@property (copy, nonatomic) NSURL *certificateDataURL;
@property (copy, nonatomic) NSURL *keyDataURL;
@property (weak, nonatomic) NSObject<TVPStoreFPSKeyLoaderDelegate> *delegate;
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection;
@property (nonatomic) BOOL holdKeyResponses;
@property (nonatomic) BOOL didSkipRentalCheckout;
@property (nonatomic) BOOL includeGUID;
@property (nonatomic) BOOL requiresExternalEntitlementCheck;
@property (retain, nonatomic) NSString *serviceProviderID;
@property (retain, nonatomic) NSNumber *rentalID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)preFetchFPSCertificate;

- (void).cxx_destruct;
- (void)sendStopRequest;
- (void)_failPendingKeyRequestsWithError:(id)a0;
- (void)_preFetchFPSCertificate;
- (id)initWithCertificateDataURL:(id)a0 keyDataURL:(id)a1;
- (void)loadSecureKeyRequest:(id)a0;
- (void)secureKeyDeliveryCoordinator:(id)a0 didReceiveOfflineKeyData:(id)a1 forKeyRequest:(id)a2;
- (void)secureKeyDeliveryCoordinator:(id)a0 didReceiveUpdatedRentalExpirationDate:(id)a1;
- (void)secureKeyDeliveryCoordinator:(id)a0 didReceiveUpdatedRentalExpirationDate:(id)a1 playbackStartDate:(id)a2;
- (void)secureKeyDeliveryCoordinator:(id)a0 didReceiveUpdatedRentalPlaybackStartDate:(id)a1;
- (void)secureKeyDeliveryCoordinator:(id)a0 willFailWithError:(id)a1;
- (void)secureKeyDeliveryCoordinator:(id)a0 willFailWithError:(id)a1 forKeyRequest:(id)a2;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(id)a0;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(id)a0 forKeyRequest:(id)a1;
- (void)secureKeyLoader:(id)a0 didFailWithError:(id)a1 forRequest:(id)a2;
- (void)secureKeyLoader:(id)a0 didLoadCertificateData:(id)a1 forRequest:(id)a2;
- (void)secureKeyLoader:(id)a0 didLoadContentIdentifierData:(id)a1 forRequest:(id)a2;
- (void)secureKeyLoader:(id)a0 didLoadKeyResponseData:(id)a1 renewalDate:(id)a2 forRequest:(id)a3;
- (void)secureKeyLoader:(id)a0 didReceiveUpdatedRentalExpirationDate:(id)a1;

@end
