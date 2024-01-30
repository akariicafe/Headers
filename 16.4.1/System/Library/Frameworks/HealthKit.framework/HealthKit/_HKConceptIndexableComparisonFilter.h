@interface _HKConceptIndexableComparisonFilter : _HKComparisonFilter

+ (BOOL)supportsKeyPath:(id)a0 forTypes:(id)a1;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;

- (BOOL)_acceptsDataObjectWithValue:(id)a0;
- (BOOL)acceptsDataObject:(id)a0;

@end
