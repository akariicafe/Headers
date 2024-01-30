@class NSDate, GEONetworkObserver, NSObject;
@protocol OS_dispatch_queue, MSPCloudSynchronizerRunConditionsDelegate;

@interface MSPCloudSynchronizerRunConditions : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSDate *lastErrorDate;
@property (nonatomic) double lastRetryDelayInSeconds;
@property (retain, nonatomic) GEONetworkObserver *networkObserver;
@property (nonatomic) BOOL hasiCloudAccount;
@property (nonatomic) BOOL isNetworkReachable;
@property (nonatomic) BOOL isDeviceToDeviceEncryptionReady;
@property (weak, nonatomic) id<MSPCloudSynchronizerRunConditionsDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldRun;

- (id)init;
- (void)networkConditionsChanged;
- (void).cxx_destruct;
- (void)accountChanged:(id)a0;
- (BOOL)shouldRetryAfterError:(id)a0;
- (void)subscribeToNetworkChangeNotifications;
- (id)description;
- (void)announceRunConditionsChanged;
- (double)currentRetryDelay;
- (id)initWithDelegate:(id)a0;
- (double)delayRetryingAfterError:(id)a0;
- (void)refreshAccountStatus;
- (void)subscribeToAccountChangeNotifications;

@end
