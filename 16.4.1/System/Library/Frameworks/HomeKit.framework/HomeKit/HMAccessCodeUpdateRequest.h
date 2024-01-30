@class HMAccessCodeValue, NSString, HMAccessoryAccessCode;

@interface HMAccessCodeUpdateRequest : NSObject <HMAccessCodeModificationRequest>

@property (readonly, copy) HMAccessoryAccessCode *accessoryAccessCode;
@property (readonly, copy) HMAccessCodeValue *updatedAccessCodeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createAccessCodeUpdateRequestValue;
- (id)initWithAccessoryAccessCode:(id)a0 updatedAccessCodeValue:(id)a1;

@end
