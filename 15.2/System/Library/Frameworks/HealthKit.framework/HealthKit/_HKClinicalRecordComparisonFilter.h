@interface _HKClinicalRecordComparisonFilter : _HKComparisonFilter

+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;

- (BOOL)acceptsDataObject:(id)a0;

@end
