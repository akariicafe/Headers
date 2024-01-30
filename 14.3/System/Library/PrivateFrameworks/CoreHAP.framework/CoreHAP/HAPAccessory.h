@class NSObject, NSString, NSArray, HMFMACAddress, NSNumber, HAPAccessoryServer;
@protocol OS_dispatch_queue, HAPAccessoryDelegate;

@interface HAPAccessory : HMFObject <HMFMerging>

@property (weak, nonatomic) HAPAccessoryServer *server;
@property (nonatomic, getter=isPrimary) BOOL primary;
@property (nonatomic, getter=isReachable) BOOL reachable;
@property (nonatomic) BOOL supportsRelay;
@property (copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSArray *services;
@property (copy, nonatomic) NSString *serverIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *productData;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSNumber *sleepInterval;
@property (weak, nonatomic) id<HAPAccessoryDelegate> delegate;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, copy, nonatomic) NSNumber *category;
@property (readonly, nonatomic) long long linkType;
@property (copy) HMFMACAddress *bluetoothClassicMacAddress;
@property (nonatomic) int consecutiveFailedPingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceIDForUniqueIdentifier:(id)a0;
+ (id)serverIdentifierWithUniqueIdentifier:(id)a0;
+ (id)productDataStringFromData:(id)a0;
+ (BOOL)isAccessoryPairedWithIdentifier:(id)a0;
+ (BOOL)isAccessoryPrimaryWithUniqueIdentifier:(id)a0;

- (BOOL)_isReachable;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldMergeObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)mergeObject:(id)a0;
- (void)invalidate;
- (void)readValueForCharacteristic:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)writeCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)readCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)writeCharacteristicValue:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)characteristicsOfType:(id)a0;
- (id)initWithServer:(id)a0 instanceID:(id)a1;
- (id)initWithServer:(id)a0 instanceID:(id)a1 parsedServices:(id)a2;
- (id)characteristicOfType:(id)a0 serviceType:(id)a1;
- (id)servicesOfType:(id)a0;
- (BOOL)_validateCharacteristicValues;
- (BOOL)_updateAndValidateServices;
- (void)_setReachable:(BOOL)a0;
- (BOOL)_updateService:(id)a0;
- (BOOL)_updateForAccessoryInformationService;

@end
