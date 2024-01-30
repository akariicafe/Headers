@interface AVTAvatarManagedRecordTransformer : NSObject <AVTAvatarManagedRecordTransformer>

- (id)identifierForManagedRecordIdentifier:(id)a0;
- (id)recordWithManagedRecord:(id)a0 error:(id *)a1;
- (id)managedRecordIdentifierForIdentifier:(id)a0;
- (void)updateManagedRecord:(id)a0 withRecord:(id)a1;

@end
