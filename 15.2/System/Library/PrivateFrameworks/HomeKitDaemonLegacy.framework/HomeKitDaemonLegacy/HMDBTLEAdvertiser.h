@class HMDHAPAccessory, NSString, HMFTimer, CUBLEAdvertiser, NSArray, HAPBTLECentralManager, NSObject, HMDAccessoryQueues;
@protocol OS_dispatch_queue;

@interface HMDBTLEAdvertiser : HMFObject <HAPBTLECentralManagerDelegate, HMFTimerDelegate>

@property (retain, nonatomic) CUBLEAdvertiser *leAdvertiser;
@property (retain, nonatomic) HMFTimer *advertisementTimer;
@property (retain, nonatomic) HMDHAPAccessory *accessory;
@property (retain, nonatomic) HAPBTLECentralManager *centralManager;
@property (retain, nonatomic) HMDAccessoryQueues *powerOnQueues;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) double advertisementTimeInterval;
@property (nonatomic) double reachabilityTimeInterval;
@property (readonly, getter=isReady) BOOL isReady;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAdvertiser;
+ (id)initializeAdvertiser;

- (void)timerDidFire:(id)a0;
- (void)powerOn:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didUpdateBTLEState:(long long)a0;
- (void)_flushQueue:(id)a0;
- (void)_flushQueues;
- (void)_clearAdvertiser;
- (void)_stopAdvertisement:(id)a0;
- (void)stopAdvertisement:(id)a0;
- (void)_completePendingPowerOnRequest:(id)a0;
- (void)_cancelOn:(id)a0;
- (void)cancelOn:(id)a0;
- (void)_startAdvertising;
- (void)_advertisementTimeout;
- (BOOL)isAdvertisingForAccessory:(id)a0;

@end
