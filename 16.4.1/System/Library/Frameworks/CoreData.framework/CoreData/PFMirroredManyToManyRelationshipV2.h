@interface PFMirroredManyToManyRelationshipV2 : PFMirroredManyToManyRelationship

+ (BOOL)_isValidMirroredRelationshipRecord:(id)a0 values:(id)a1;

- (id)initWithRecord:(id)a0 andValues:(id)a1 withManagedObjectModel:(id)a2 andType:(unsigned long long)a3;
- (id)initWithRecordID:(id)a0 forRecordWithID:(id)a1 relatedToRecordWithID:(id)a2 byRelationship:(id)a3 withInverse:(id)a4 andType:(unsigned long long)a5;
- (void)populateRecordValues:(id)a0;

@end
