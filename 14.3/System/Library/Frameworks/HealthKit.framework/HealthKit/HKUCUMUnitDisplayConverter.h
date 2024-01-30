@class NSDictionary;

@interface HKUCUMUnitDisplayConverter : NSObject

@property (copy, nonatomic) NSDictionary *synonymLookupTable;
@property (copy, nonatomic) NSDictionary *hkUnitNameLookupTable;

+ (id)sharedConverter;

- (id)init;
- (id)synonymForUCUMUnitString:(id)a0;
- (void).cxx_destruct;
- (id)hkUnitNameForUCUMUnitCode:(id)a0;

@end
