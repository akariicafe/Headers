@interface _HKCategorySampleComparisonFilter : _HKComparisonFilter

+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;

- (BOOL)acceptsDataObject:(id)a0;

@end
