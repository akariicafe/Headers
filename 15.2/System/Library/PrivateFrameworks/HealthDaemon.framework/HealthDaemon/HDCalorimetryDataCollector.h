@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector

+ (BOOL)isNatalimeterAvailable;
+ (BOOL)isCoreMotionCaloriePushModelEnabled;
+ (BOOL)supportsCollectionForProfile:(id)a0;

- (id)persistentIdentifier;
- (id)initWithProfile:(id)a0;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (id)queue_newDataSource;
- (id)collectedTypes;
- (Class)coreMotionDatumClass;

@end
