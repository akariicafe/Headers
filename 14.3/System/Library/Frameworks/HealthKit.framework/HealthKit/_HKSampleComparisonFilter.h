@class HKSampleType;

@interface _HKSampleComparisonFilter : _HKComparisonFilter {
    double _comparisonTime;
    HKSampleType *_anySampleType;
}

+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)startDateFilterWithOperatorType:(unsigned long long)a0 date:(id)a1 dataTypes:(id)a2;
+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (BOOL)allowsEmptyDataTypesSetForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (id)endDateFilterWithOperatorType:(unsigned long long)a0 date:(id)a1 dataTypes:(id)a2;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;

- (void).cxx_destruct;
- (void)configureInMemoryFilter;
- (BOOL)acceptsDataObject:(id)a0;
- (long long)acceptsDataObjectWithStartTimestamp:(double)a0 endTimestamp:(double)a1 valueInCanonicalUnit:(double)a2;

@end
