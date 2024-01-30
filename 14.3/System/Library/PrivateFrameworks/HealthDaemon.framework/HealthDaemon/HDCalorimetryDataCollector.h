@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector

+ (BOOL)isCoreMotionCaloriePushModelEnabled;
+ (BOOL)supportsCollectionForProfile:(id)a0;
+ (BOOL)isNatalimeterAvailable;

- (id)initWithProfile:(id)a0;
- (id)persistentIdentifier;
- (Class)coreMotionDatumClass;
- (id)collectedTypes;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;

@end
