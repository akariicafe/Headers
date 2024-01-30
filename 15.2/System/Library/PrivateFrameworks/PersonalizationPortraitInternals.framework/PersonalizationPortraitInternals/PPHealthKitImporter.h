@class PPSQLDatabase, HKHealthStore;

@interface PPHealthKitImporter : NSObject {
    HKHealthStore *_healthStore;
    PPSQLDatabase *_db;
}

- (id)initWithDatabase:(id)a0;
- (void)importHealthKitDataWithShouldContinueBlock:(id /* block */)a0;
- (void)importHealthKitData;
- (void).cxx_destruct;
- (id)init;

@end
