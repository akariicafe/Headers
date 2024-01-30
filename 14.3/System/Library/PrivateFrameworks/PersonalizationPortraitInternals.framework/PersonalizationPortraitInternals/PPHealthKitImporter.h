@class PPSQLDatabase, HKHealthStore;

@interface PPHealthKitImporter : NSObject {
    HKHealthStore *_healthStore;
    PPSQLDatabase *_db;
}

+ (BOOL)_shouldImport;
+ (id)_workoutTopicMap;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (void)importHealthKitData;
- (void)importHealthKitDataWithShouldContinueBlock:(id /* block */)a0;
- (void)_importWorkouts:(id)a0;
- (void)_donateTopics:(id)a0 workout:(id)a1;
- (void)_removeDeletedWorkouts:(id)a0;
- (id)_scoredTopicsFromPropertiesOfWorkouts:(id)a0 workoutTopicMap:(id)a1;
- (id)_getSavedAnchor;
- (BOOL)_saveAnchor:(id)a0;

@end
