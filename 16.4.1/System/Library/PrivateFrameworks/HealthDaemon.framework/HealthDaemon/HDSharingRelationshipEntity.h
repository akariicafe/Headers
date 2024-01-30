@interface HDSharingRelationshipEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)entityWithRecipientIdentifier:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteEntityWithRecipientIdentifier:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)insertOrReplaceWithRecipientIdentifier:(id)a0 dateModified:(id)a1 syncProvenance:(long long)a2 syncIdentity:(long long)a3 databaseTransaction:(id)a4 error:(id *)a5;

- (id)dateModifiedInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)recipientIdentifierInDatabaseTransaction:(id)a0 error:(id *)a1;
- (BOOL)setDateModified:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;

@end
