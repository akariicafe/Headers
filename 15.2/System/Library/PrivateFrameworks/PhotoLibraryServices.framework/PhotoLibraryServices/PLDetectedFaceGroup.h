@class PLPerson, NSString, NSSet, PLDetectedFace;

@interface PLDetectedFaceGroup : PLManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSSet *detectedFaces;
@property (nonatomic) int unnamedFaceCount;
@property (retain, nonatomic) PLPerson *associatedPerson;
@property (retain, nonatomic) PLDetectedFace *keyFace;
@property (nonatomic) int personBuilderState;

+ (id)entityName;
+ (id)detectedFaceGroupWithUUID:(id)a0 inManagedObjectContext:(id)a1;
+ (void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:(id)a0 predicate:(id)a1 library:(id)a2 completion:(id /* block */)a3;

- (void)refreshFaces;
- (void)awakeFromInsert;
- (void)willSave;
- (id)mutableDetectedFaces;

@end
