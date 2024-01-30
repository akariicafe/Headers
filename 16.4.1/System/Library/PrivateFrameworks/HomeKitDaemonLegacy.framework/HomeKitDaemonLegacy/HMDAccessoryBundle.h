@class HMFObject, HMDHAPAccessory;

@interface HMDAccessoryBundle : HMFObject

@property (retain, nonatomic) HMDHAPAccessory *accessory;
@property (retain, nonatomic) HMFObject *context;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 context:(id)a1;

@end
