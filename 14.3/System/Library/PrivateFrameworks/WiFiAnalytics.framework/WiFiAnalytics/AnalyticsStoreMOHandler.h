@class AnalyticsStoreMOContext;

@interface AnalyticsStoreMOHandler : NSObject

@property (retain, nonatomic) AnalyticsStoreMOContext *storeMOContext;

- (id)managedObjectContext;
- (id)geotagManagedObject;
- (id)fetchAll:(id)a0;
- (void)updateManagedObjectContextWithoutSave;
- (id)createEntity:(id)a0;
- (id)getDeploymentUuidForBssids:(id)a0;
- (id)leaveManagedObject;
- (void)performPruneBasedOnStoreSize;
- (id)bssManagedObject:(id)a0 ssid:(id)a1 created:(BOOL *)a2;
- (id)entityByCounting:(id)a0 withPredicate:(id)a1 created:(BOOL *)a2;
- (BOOL)coalesceBssidsIntoDeployment:(id)a0;
- (void).cxx_destruct;
- (void)saveManagedObjectContext;
- (id)networkManagedObjectPropertyValue:(id)a0 forKey:(id)a1;
- (id)analyticsStoreEntityRelationshipNames;
- (id)entity:(id)a0 withPredicate:(id)a1 created:(BOOL *)a2;
- (id)fetchRoamObjects:(id)a0 fetchLimit:(unsigned long long)a1;
- (id)fetchRequestForEntity:(id)a0;
- (id)fetch:(id)a0 withPredicate:(id)a1;
- (id)networkManagedObject:(id)a0;
- (BOOL)removeNetwork:(id)a0;
- (id)fetchPropertiesForEntity:(id)a0 properties:(id)a1 predicate:(id)a2;
- (id)predicateForEntityWithAgeOlderThan:(id)a0 dateAttribute:(id)a1 olderThan:(double)a2;
- (id)fetchRequestForEntityWithOffset:(id)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2;
- (BOOL)batchDelete:(id)a0 withPredicate:(id)a1 withFetchRequest:(id)a2;
- (BOOL)setBssManagedObjectPropertyValueForKey:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (id)mostRecentJoinMO:(id)a0 ssid:(id)a1;
- (id)initWithType:(unsigned long long)a0;
- (id)bssManagedObjectPropertyValue:(id)a0 forKey:(id)a1;
- (unsigned long long)entityCount:(id)a0 withPredicate:(id)a1;
- (id)roamManagedObject;
- (id)predicateForEntityWithAge:(id)a0 maxAge:(unsigned long long)a1;
- (id)fetchPropertiesForEntityWithLimitAndSortDescriptor:(id)a0 properties:(id)a1 predicate:(id)a2 fetchLimit:(unsigned long long)a3 sortDescriptor:(id)a4 returnDistinct:(BOOL)a5;
- (id)allBssidsForSsid:(id)a0;
- (void)pruneManagedObjects;
- (void)performBlockOnManagedObjectContext:(id)a0 block:(id /* block */)a1;
- (id)analyticsStoreEntityNames;
- (id)allSsidsForBssid:(id)a0;
- (void)ageOutManagedObjectsOlderThan:(double)a0;
- (id)networkManagedObject:(id)a0 created:(BOOL *)a1;
- (id)earliestJoinDate:(id)a0;
- (id)fetchRoamCache:(id)a0 fetchLimit:(unsigned long long)a1;
- (id)analyticsStoreEntitiesWithDate;
- (BOOL)setNetworkManagedObjectPropertyValueForKey:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (unsigned long long)roamsCount:(id)a0 fetchLimit:(unsigned long long)a1;
- (id)joinManagedObject;
- (BOOL)batchUpdate:(id)a0 withPredicate:(id)a1 propertiesToUpdate:(id)a2;
- (id)fetchRoamProperties:(id)a0 fetchLimit:(unsigned long long)a1 properties:(id)a2;
- (id)bssManagedObject:(id)a0 ssid:(id)a1;

@end
