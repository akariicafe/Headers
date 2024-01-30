@interface HDQuantitySampleValueEnumerator : NSObject

+ (BOOL)orderedQuantityValuesForPredicate:(id)a0 transaction:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)orderedQuantityValuesBySeriesForPredicate:(id)a0 transaction:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)orderedQuantityValuesForPredicate:(id)a0 profile:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)orderedQuantityValuesBySeriesForPredicate:(id)a0 profile:(id)a1 options:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;

@end
