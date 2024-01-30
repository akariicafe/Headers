@class HMFTimer, HAPBTLECentralManager, CUBLEScanner, HMDAccessoryQueues, NSString, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface BTLEScanner : HMFObject <HMFTimerDelegate, HAPBTLECentralManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFTimer *scanTimer;
@property (retain, nonatomic) CUBLEScanner *cubleScanner;
@property (retain, nonatomic) HAPBTLECentralManager *centralManager;
@property (retain, nonatomic) HMDAccessoryQueues *scanQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)sharedScanLock;
+ (id)initializeScanner;

- (id)init;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)_stopTimer;
- (void)_flushQueue;
- (void)didUpdateBTLEState:(long long)a0;
- (void)_stopScan;
- (void)_checkCanScan;
- (BOOL)startScan:(id)a0 timeout:(double)a1;

@end
