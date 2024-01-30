@interface HDQuantitySampleValueEnumerator : NSObject

+ (id)_queryForEnumerationWithPredicate:(id)a0 transaction:(id)a1 options:(long long)a2;
+ (BOOL)orderedQuantityValuesBySeriesForPredicate:(id)a0 transaction:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)orderedQuantityValuesBySeriesForPredicate:(id)a0 profile:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)orderedQuantityValuesForPredicate:(id)a0 transaction:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (id)_propertiesForEnumeration;
+ (BOOL)orderedQuantityValuesForPredicate:(id)a0 profile:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (long long)_enumerateWithEnumerator:(id)a0 endTime:(double)a1 error:(id *)a2 handler:(id /* block */)a3;

@end
