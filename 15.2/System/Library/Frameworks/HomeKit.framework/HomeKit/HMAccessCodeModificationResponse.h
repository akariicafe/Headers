@class HMAccessoryAccessCode, HMAccessory, NSError, HMAccessCodeValue;

@interface HMAccessCodeModificationResponse : NSObject

@property (readonly) HMAccessory *accessory;
@property (retain) HMAccessoryAccessCode *accessoryAccessCode;
@property (copy) HMAccessCodeValue *accessCodeValue;
@property (readonly) long long operationType;
@property (retain) NSError *error;

+ (id)responseWithValue:(id)a0 accessory:(id)a1;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 accessoryAccessCode:(id)a1 accessCodeValue:(id)a2 operationType:(long long)a3 error:(id)a4;

@end
