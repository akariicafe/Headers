@interface PFMirroredRelationship : NSObject

+ (id)mirroredRelationshipWithManagedObject:(id)a0 withRecordID:(id)a1 relatedToObjectWithRecordID:(id)a2 byRelationship:(id)a3;
+ (BOOL)isValidMirroredRelationshipRecord:(id)a0 values:(id)a1;
+ (id)mirroredRelationshipWithManyToManyRecord:(id)a0 values:(id)a1 andManagedObjectModel:(id)a2;
+ (id)mirroredRelationshipWithDeletedRecordType:(id)a0 recordID:(id)a1 andManagedObjectModel:(id)a2;

- (BOOL)updateRelationshipValueUsingImportContext:(id)a0 andManagedObjectContext:(id)a1 error:(id *)a2;

@end
