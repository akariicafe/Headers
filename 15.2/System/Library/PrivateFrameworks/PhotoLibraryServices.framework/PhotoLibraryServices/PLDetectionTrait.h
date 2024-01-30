@class PLDetectedFace;

@interface PLDetectionTrait : PLManagedObject

@property (nonatomic) short type;
@property (nonatomic) short value;
@property (nonatomic) double score;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (retain, nonatomic) PLDetectedFace *detection;

+ (id)entityName;
+ (id)fetchDetectionTraitByFaceUUIDWithFaceUUIDs:(id)a0 library:(id)a1 error:(id *)a2;
+ (id)insertIntoManagedObjectContext:(id)a0 type:(short)a1 value:(short)a2 score:(double)a3 startTime:(double)a4 duration:(double)a5;

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (void)willSave;
- (void)_touchPersonForPersistenceIfNeeded;
- (id)debugLogDescription;

@end
