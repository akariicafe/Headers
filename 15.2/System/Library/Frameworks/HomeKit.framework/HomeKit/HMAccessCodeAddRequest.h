@class HMAccessCodeValue, HMAccessory, NSString;

@interface HMAccessCodeAddRequest : NSObject <HMAccessCodeModificationRequest>

@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccessCodeValue:(id)a0 accessory:(id)a1;
- (id)createAccessCodeAddRequestValue;

@end
