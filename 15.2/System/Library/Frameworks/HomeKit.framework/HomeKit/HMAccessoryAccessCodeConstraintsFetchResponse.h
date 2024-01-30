@class HMAccessory, NSError, HMAccessCodeConstraints;

@interface HMAccessoryAccessCodeConstraintsFetchResponse : NSObject

@property (readonly) HMAccessory *accessory;
@property (readonly, copy) HMAccessCodeConstraints *constraints;
@property (retain) NSError *error;

+ (id)responseWithValue:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 constraints:(id)a1 error:(id)a2;

@end
