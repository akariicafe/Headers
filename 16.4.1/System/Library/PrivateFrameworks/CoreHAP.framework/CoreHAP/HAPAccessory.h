@class NSObject, NSString, NSArray, HMFMACAddress, NSDate, NSNumber, HAPAccessoryServer;
@protocol OS_dispatch_queue, HAPAccessoryDelegate;

@interface HAPAccessory : HMFObject <HMFMerging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) HAPAccessoryServer *server;
@property (nonatomic, getter=isPrimary) BOOL primary;
@property (nonatomic, getter=isReachable) BOOL reachable;
@property (nonatomic) unsigned long long suspendedState;
@property (copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSArray *services;
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
@property (readonly) long long communicationProtocol;
@property (copy) HMFMACAddress *bluetoothClassicMacAddress;
@property (nonatomic) int consecutiveFailedPingCount;
@property (copy, nonatomic) NSDate *timeBecameReachable;
@property (nonatomic) BOOL shouldDisconnectOnIdle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)instanceIDForUniqueIdentifier:(id)a0;
+ (BOOL)isAccessoryPairedWithIdentifier:(id)a0;
+ (BOOL)isAccessoryPrimaryWithUniqueIdentifier:(id)a0;
+ (id)productDataStringFromData:(id)a0;
+ (id)serverIdentifierWithUniqueIdentifier:(id)a0;

- (void)invalidateWithError:(id)a0;
- (id)logIdentifier;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)mergeObject:(id)a0;
- (BOOL)shouldMergeObject:(id)a0;
- (BOOL)_updateService:(id)a0;
- (id)servicesOfType:(id)a0;
- (BOOL)_updateAndValidateServices;
- (BOOL)_validateCharacteristicValues;
- (id)characteristicOfType:(id)a0 serviceType:(id)a1;
- (id)characteristicWithInstanceID:(id)a0;
- (id)characteristicsOfType:(id)a0;
- (id)initWithServer:(id)a0 instanceID:(id)a1;
- (id)initWithServer:(id)a0 instanceID:(id)a1 parsedServices:(id)a2;
- (void)readCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)readValueForCharacteristic:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)serviceWithInstanceID:(id)a0;
- (BOOL)updateForAccessoryInformationService;
- (void)writeCharacteristicValue:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)writeCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;

@end
