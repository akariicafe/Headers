@class NSRelationshipDescription, CKRecordID, NSString;

@interface PFMirroredManyToManyRelationship : PFMirroredRelationship {
    unsigned long long _type;
    NSRelationshipDescription *_relationshipDescription;
    NSRelationshipDescription *_inverseRelationshipDescription;
    CKRecordID *_manyToManyRecordID;
    NSString *_manyToManyRecordType;
    CKRecordID *_ckRecordID;
    CKRecordID *_relatedCKRecordID;
}

+ (BOOL)_isValidMirroredRelationshipRecord:(id)a0 values:(id)a1;

- (BOOL)updateRelationshipValueUsingImportContext:(id)a0 andManagedObjectContext:(id)a1 error:(id *)a2;
- (id)description;
- (void)dealloc;
- (id)initWithRecordID:(id)a0 recordType:(id)a1 managedObjectModel:(id)a2 andType:(unsigned long long)a3;

@end
