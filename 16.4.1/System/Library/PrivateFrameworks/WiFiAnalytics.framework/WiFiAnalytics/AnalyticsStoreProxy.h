@interface AnalyticsStoreProxy : NSObject

+ (BOOL)batchUpdate:(id)a0 withPredicate:(id)a1 propertiesToUpdate:(id)a2 moc:(id)a3;
+ (id)fetchRequestForEntityWithBatchSize:(id)a0 batchSize:(unsigned long long)a1 prefetch:(id)a2;
+ (id)analyticsStoreEntityRelationshipNames;
+ (id)entity:(id)a0 withPredicate:(id)a1 created:(BOOL *)a2 moc:(id)a3;
+ (id)predicateForEntityWithAgeOlderThan:(id)a0 dateAttribute:(id)a1 olderThan:(double)a2;
+ (unsigned long long)entityCount:(id)a0 withPredicate:(id)a1 moc:(id)a2;
+ (id)fetchPropertiesForEntityWithLimitAndSortDescriptor:(id)a0 properties:(id)a1 predicate:(id)a2 fetchLimit:(unsigned long long)a3 sortDescriptor:(id)a4 returnDistinct:(BOOL)a5 moc:(id)a6;
+ (id)fetchRequestForEntity:(id)a0;
+ (id)analyticsStoreEntityNames;
+ (id)createEntity:(id)a0 moc:(id)a1;
+ (id)fetchAll:(id)a0 moc:(id)a1;
+ (BOOL)batchDelete:(id)a0 withPredicate:(id)a1 withFetchRequest:(id)a2 moc:(id)a3;
+ (id)fetch:(id)a0 withPredicate:(id)a1 moc:(id)a2;
+ (id)fetchRequestForEntityWithOffset:(id)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2 prefetch:(id)a3;
+ (id)predicateForEntityWithAge:(id)a0 maxAge:(unsigned long long)a1;
+ (id)entityByCounting:(id)a0 withPredicate:(id)a1 created:(BOOL *)a2 moc:(id)a3;
+ (id)fetchPropertiesForEntity:(id)a0 properties:(id)a1 predicate:(id)a2 moc:(id)a3;
+ (id)analyticsStoreEntitiesWithDate;

@end
