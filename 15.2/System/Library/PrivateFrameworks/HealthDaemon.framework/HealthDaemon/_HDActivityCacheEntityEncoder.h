@class NSSet;

@interface _HDActivityCacheEntityEncoder : HDEntityEncoder {
    NSSet *_activityStatisticsQuantityInfoClasses;
}

- (id)orderedProperties;
- (void).cxx_destruct;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;
- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)createBareObject;

@end
