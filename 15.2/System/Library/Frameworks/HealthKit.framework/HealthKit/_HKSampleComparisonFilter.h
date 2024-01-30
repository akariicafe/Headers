@class HKSampleType;

@interface _HKSampleComparisonFilter : _HKComparisonFilter {
    double _comparisonTime;
    HKSampleType *_anySampleType;
}

+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)endDateFilterWithOperatorType:(unsigned long long)a0 date:(id)a1 dataTypes:(id)a2;
+ (BOOL)isSupportedKeyPath:(id)a0;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (BOOL)allowsEmptyDataTypesSetForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (id)startDateFilterWithOperatorType:(unsigned long long)a0 date:(id)a1 dataTypes:(id)a2;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (long long)acceptsDataObjectWithStartTimestamp:(double)a0 endTimestamp:(double)a1 valueInCanonicalUnit:(double)a2;
- (BOOL)acceptsDataObject:(id)a0;
- (void)configureInMemoryFilter;

@end
