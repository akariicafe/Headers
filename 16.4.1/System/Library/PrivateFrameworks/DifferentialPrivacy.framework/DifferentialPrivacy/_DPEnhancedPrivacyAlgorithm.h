@interface _DPEnhancedPrivacyAlgorithm : NSObject

+ (BOOL)isMetadataValid:(id)a0;
+ (id)allowedDataTypesForKey:(id)a0 withMetadata:(id)a1;
+ (id)findMultipleDonationForKey:(id)a0 inRecords:(id)a1;
+ (BOOL)isEnhancedPrivacyAlgorithm:(id)a0;
+ (BOOL)verifyEnhancedDPParamsForKey:(id)a0 withMetadata:(id)a1;

@end
