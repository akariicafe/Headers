@class AnalyticsPersistenceManager, AnalyticsStoreMOContext;

@interface AnalyticsStoreMOHandler : NSObject

@property (retain, nonatomic) AnalyticsStoreMOContext *storeMOContext;
@property (retain, nonatomic) AnalyticsPersistenceManager *persistenceManager;
@property (nonatomic) unsigned long long storeType;

- (id)managedObjectContext;
- (BOOL)setNetworkManagedObjectPropertyValueForKeyAndSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (BOOL)setBssManagedObjectPropertyValueForKeyAndSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (void)ageOutManagedObjectsOlderThan:(double)a0;
- (void)updateManagedObjectContextWithoutSave;
- (void)saveManagedObjectContext;
- (void)performPruneBasedOnStoreSize;
- (void).cxx_destruct;
- (void)performBlockOnManagedObjectContextForNSData:(id)a0 withDate:(id)a1 block:(id /* block */)a2;
- (void)performBlockOnManagedObjectContext:(id)a0 block:(id /* block */)a1;
- (id)initWithType:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)pruneManagedObjects;

@end
