@interface _HDQuantitySampleSeriesEntityEncoder : HDEntityEncoder

- (id)objectForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)_codableQuantitySampleForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)orderedProperties;
- (BOOL)generateCodableRepresentationsForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 maxBytesPerRepresentation:(long long)a2 error:(id *)a3 handler:(id /* block */)a4;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;

@end
