@interface _HKConceptIndexableComparisonFilter : _HKComparisonFilter

+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)supportsKeyPath:(id)a0 forTypes:(id)a1;
+ (BOOL)isSupportedKeyPath:(id)a0;

- (BOOL)acceptsDataObject:(id)a0;

@end
