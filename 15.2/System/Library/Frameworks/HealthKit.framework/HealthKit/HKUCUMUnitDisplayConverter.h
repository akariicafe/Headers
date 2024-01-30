@class NSDictionary;

@interface HKUCUMUnitDisplayConverter : NSObject

@property (copy, nonatomic) NSDictionary *synonymLookupTable;
@property (copy, nonatomic) NSDictionary *hkUnitNameLookupTable;

+ (id)sharedConverter;

- (void).cxx_destruct;
- (id)init;
- (id)hkUnitNameForUCUMUnitCode:(id)a0;
- (id)synonymForUCUMUnitString:(id)a0;

@end
