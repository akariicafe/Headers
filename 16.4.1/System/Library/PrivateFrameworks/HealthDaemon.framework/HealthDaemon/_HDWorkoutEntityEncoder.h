@class HDSQLiteStatement;

@interface _HDWorkoutEntityEncoder : HDEntityEncoder {
    HDSQLiteStatement *_workoutEntryLookupStatement;
    BOOL _includeCondenserInfo;
}

+ (long long)estimatedEncodedSize;

- (id)orderedProperties;
- (id)initWithHealthEntityClass:(Class)a0 profile:(id)a1 transaction:(id)a2 purpose:(long long)a3 encodingOptions:(id)a4 authorizationFilter:(id /* block */)a5;
- (id)createBareObjectWithRow:(struct HDSQLiteRow { } *)a0;
- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
