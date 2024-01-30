@interface LSHRNSupport : NSObject

+ (void)invalidateCache;
+ (void)setActivationRecordOverride:(BOOL)a0;
+ (void)setActivationRecordOverrideNil;
+ (void)setFeatureFlagOverride:(BOOL)a0;
+ (id)vendorIDFromVendorName:(id)a0 seedData:(id)a1 error:(id *)a2;
+ (BOOL)deviceConfiguredForHRN;

@end
