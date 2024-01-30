@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VUIRentalManager : NSObject <MPStoreDownloadManagerObserver>

@property (nonatomic) BOOL needToSendPlaybackStartDatesToServer;
@property (retain, nonatomic) NSMutableSet *deferredRentalCheckinContexts;
@property (nonatomic) BOOL initialized;
@property (nonatomic) BOOL initialRentalsFetched;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)downloadManager:(id)a0 downloadDidFinish:(id)a1;
- (void)dealloc;
- (id)_init;
- (void)_activeAccountDidChange:(id)a0;
- (void)_networkReachbilityDidChange:(id)a0;
- (void)checkOutRentalWithID:(id)a0 dsid:(id)a1 checkoutType:(unsigned long long)a2 startPlaybackClock:(BOOL)a3 completion:(id /* block */)a4;
- (void)checkInRentalWithID:(id)a0 dsid:(id)a1 completion:(id /* block */)a2;
- (void)_sendPlaybackStartDatesToServerIfNecessary;
- (void)_checkInRentalsNeedingCheckIn;
- (void)_didFetchInitialDownloads:(id)a0;
- (void)initializeRentals;

@end
