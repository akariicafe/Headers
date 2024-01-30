@class NSRelationshipDescription, CKRecordID, NSString;

@interface PFMirroredManyToManyRelationship : PFMirroredRelationship

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSRelationshipDescription *relationshipDescription;
@property (readonly, nonatomic) NSRelationshipDescription *inverseRelationshipDescription;
@property (readonly, nonatomic) CKRecordID *manyToManyRecordID;
@property (readonly, nonatomic) NSString *manyToManyRecordType;
@property (readonly, nonatomic) CKRecordID *ckRecordID;
@property (readonly, nonatomic) CKRecordID *relatedCKRecordID;

+ (id)recordNamesFromManyToManyCKRecordName:(id)a0;
+ (BOOL)_isValidMirroredRelationshipRecord:(id)a0 values:(id)a1;
+ (id)ckRecordNameForOrderedRecordNames:(id)a0;
+ (id)orderRelationships:(id)a0;
+ (id)orderedRelationshipsForRecordType:(id)a0 andManagedObjectModel:(id)a1;
+ (id)ckRecordTypeForOrderedRelationships:(id)a0;

- (void)_setManyToManyRecordID:(id)a0 manyToManyRecordType:(id)a1 ckRecordID:(id)a2 relatedCKRecordID:(id)a3 relationshipDescription:(id)a4 inverseRelationshipDescription:(id)a5 type:(unsigned long long)a6;
- (void)dealloc;
- (id)initWithRecordID:(id)a0 recordType:(id)a1 managedObjectModel:(id)a2 andType:(unsigned long long)a3;
- (BOOL)updateRelationshipValueUsingImportContext:(id)a0 andManagedObjectContext:(id)a1 error:(id *)a2;
- (id)description;
- (id)recordTypeToRecordID;

@end
