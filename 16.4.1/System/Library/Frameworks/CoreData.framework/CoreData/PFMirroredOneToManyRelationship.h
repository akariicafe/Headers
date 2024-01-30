@class NSRelationshipDescription, CKRecordID;

@interface PFMirroredOneToManyRelationship : PFMirroredRelationship {
    NSRelationshipDescription *_relationshipDescription;
    NSRelationshipDescription *_inverseRelationshipDescription;
    CKRecordID *_relatedRecordID;
    CKRecordID *_recordID;
}

- (void)dealloc;
- (id)initWithManagedObject:(id)a0 withRecordName:(id)a1 relatedToRecordWithRecordName:(id)a2 byRelationship:(id)a3;
- (BOOL)updateRelationshipValueUsingImportContext:(id)a0 andManagedObjectContext:(id)a1 error:(id *)a2;

@end
