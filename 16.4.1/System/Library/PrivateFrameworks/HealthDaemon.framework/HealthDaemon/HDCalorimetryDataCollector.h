@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector

+ (BOOL)isNatalimeterAvailable;
+ (BOOL)isCoreMotionCaloriePushModelEnabled;
+ (BOOL)supportsCollectionForProfile:(id)a0;

- (id)initWithProfile:(id)a0;
- (id)persistentIdentifier;
- (id)collectedTypes;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (Class)coreMotionDatumClass;
- (id)queue_newDataSource;

@end
