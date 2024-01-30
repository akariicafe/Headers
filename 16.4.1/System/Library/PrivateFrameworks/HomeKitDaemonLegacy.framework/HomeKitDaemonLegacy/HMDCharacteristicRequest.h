@class HMDHAPAccessory, NSString, HMDCharacteristic, HMDService;

@interface HMDCharacteristicRequest : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDCharacteristic *characteristic;
@property (readonly, nonatomic) HMDService *service;
@property (readonly, nonatomic) HMDHAPAccessory *accessory;
@property (readonly, nonatomic) id previousValue;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)requestWithCharacteristic:(id)a0;

@end
