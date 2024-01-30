@class NSString, TVPSecureKeyLoader, NSData, NSMutableSet, NSObject, TVPPlaybackReportingEventCollection;
@protocol TVPSecureKeyDeliveryCoordinatorDelegate;

@interface TVPSecureKeyDeliveryCoordinator : NSObject <TVPSecureKeyLoaderDelegate>

@property (retain, nonatomic) TVPSecureKeyLoader *secureKeyLoader;
@property (retain, nonatomic) NSData *certificateData;
@property (nonatomic) BOOL certFetchInProgress;
@property (retain, nonatomic) NSMutableSet *requestsAwaitingCertFetch;
@property (weak, nonatomic) NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *delegate;
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)isSecureKeyDeliveryRequest:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)sendStopRequest;
- (void)_finishLoadingWithError:(id)a0 forRequest:(id)a1;
- (void)_loadSecureKeyRequest:(id)a0 sendStartReportingEvent:(BOOL)a1;
- (id)initWithSecureKeyLoader:(id)a0;
- (void)loadSecureKeyRequest:(id)a0;
- (void)secureKeyLoader:(id)a0 didFailWithError:(id)a1 forRequest:(id)a2;
- (void)secureKeyLoader:(id)a0 didLoadCertificateData:(id)a1 forRequest:(id)a2;
- (void)secureKeyLoader:(id)a0 didLoadContentIdentifierData:(id)a1 forRequest:(id)a2;
- (void)secureKeyLoader:(id)a0 didLoadKeyResponseData:(id)a1 renewalDate:(id)a2 forRequest:(id)a3;
- (void)secureKeyLoader:(id)a0 didReceiveUpdatedRentalExpirationDate:(id)a1;
- (void)secureKeyLoader:(id)a0 didReceiveUpdatedRentalExpirationDate:(id)a1 playbackStartDate:(id)a2;
- (void)secureKeyLoader:(id)a0 didReceiveUpdatedRentalPlaybackStartDate:(id)a1;

@end
