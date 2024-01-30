@class NSRelationshipDescription, CKRecordID, NSManagedObjectID;

@interface PFMirroredOneToManyRelationship : PFMirroredRelationship

@property (readonly, nonatomic) NSRelationshipDescription *relationshipDescription;
@property (readonly, nonatomic) NSRelationshipDescription *inverseRelationshipDescription;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) CKRecordID *relatedObjectRecordID;

- (void)dealloc;
- (id)initWithManagedObject:(id)a0 withRecordName:(id)a1 relatedToRecordWithRecordName:(id)a2 byRelationship:(id)a3;
- (BOOL)updateRelationshipValueUsingImportContext:(id)a0 andManagedObjectContext:(id)a1 error:(id *)a2;
- (id)recordTypesToRecordIDs;

@end
