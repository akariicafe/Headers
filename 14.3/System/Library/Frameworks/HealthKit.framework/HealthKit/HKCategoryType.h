@interface HKCategoryType : HKSampleType

+ (id)_categoryTypeWithCode:(long long)a0;

- (long long)_defaultValue;
- (long long)_categoryValueForValue:(long long)a0;
- (BOOL)_acceptsValue:(long long)a0;
- (BOOL)_validateMetadata:(id)a0 sample:(id)a1 error:(id *)a2;
- (id)_predicateForSDKVersion:(unsigned int)a0;

@end
