@interface LSHRNSupport : NSObject

+ (void)setActivationRecordOverride:(BOOL)a0;
+ (id)vendorIDFromVendorName:(id)a0 seedData:(id)a1 error:(id *)a2;
+ (void)setFeatureFlagOverride:(BOOL)a0;
+ (BOOL)deviceConfiguredForHRN;
+ (void)invalidateCache;
+ (void)setActivationRecordOverrideNil;

@end
