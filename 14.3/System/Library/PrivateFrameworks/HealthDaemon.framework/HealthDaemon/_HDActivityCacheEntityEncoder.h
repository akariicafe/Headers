@class NSSet;

@interface _HDActivityCacheEntityEncoder : HDEntityEncoder {
    NSSet *_activityStatisticsQuantityInfoClasses;
}

- (void).cxx_destruct;
- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (id)createBareObject;
- (id)orderedProperties;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;
- (BOOL)_shouldIncludeActivityCachePrivateProperties;
- (BOOL)_shouldIncludeActivityCacheStatistics;
- (id)_decodeActivityQuantityStatisticsInfosWithRow:(struct HDSQLiteRow { } *)a0 column:(int)a1;
- (void)_applyPrivateActivityCachePropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2;
- (void)_applyActivityCacheStatisticsToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2;

@end
