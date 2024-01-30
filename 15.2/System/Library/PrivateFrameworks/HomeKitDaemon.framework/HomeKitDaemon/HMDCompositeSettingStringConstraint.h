@class NSSet, NSString;

@interface HMDCompositeSettingStringConstraint : HMFObject <HMDCompositeSettingConstraint>

@property (copy) NSSet *validValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (id)initWithValidValues:(id)a0;

@end
