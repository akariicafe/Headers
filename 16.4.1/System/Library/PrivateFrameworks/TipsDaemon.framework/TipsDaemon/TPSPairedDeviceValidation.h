@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface TPSPairedDeviceValidation : TPSInclusivityValidation

@property (copy, nonatomic) NSArray *cachedPeers;
@property (copy, nonatomic) NSArray *cachedDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly, nonatomic) NSArray *targetDevices;
@property (readonly, nonatomic) NSArray *excludeDevices;

+ (id)watchDeviceInfo;
+ (id)airPodsDeviceInfo;
+ (id)homePodDeviceInfo;

- (id)completionQueue;
- (void).cxx_destruct;
- (void)validateWithCompletion:(id /* block */)a0;
- (id)_bluetoothValidationForProductID:(unsigned int)a0 deviceType:(long long)a1;
- (id)_bluetoothValidationForTag:(id)a0 deviceType:(long long)a1;
- (id)_validationForDeviceNumber:(long long)a0;
- (id)_validationsForDevices:(id)a0;
- (id)initWithTargetDevices:(id)a0 excludeDevices:(id)a1;

@end
