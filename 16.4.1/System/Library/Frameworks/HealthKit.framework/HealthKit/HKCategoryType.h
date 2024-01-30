@interface HKCategoryType : HKSampleType

+ (id)_categoryTypeWithCode:(long long)a0;

- (long long)_defaultValue;
- (id)initWithIdentifier:(id)a0;
- (BOOL)_validateMetadata:(id)a0 sample:(id)a1 error:(id *)a2;
- (long long)_categoryValueForValue:(long long)a0;
- (id)_predicateForSDKVersion:(unsigned int)a0;
- (BOOL)_acceptsValue:(long long)a0;

@end
