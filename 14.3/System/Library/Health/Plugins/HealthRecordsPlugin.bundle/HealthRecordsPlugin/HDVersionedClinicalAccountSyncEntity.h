@interface HDVersionedClinicalAccountSyncEntity : HDClinicalAccountSyncEntity

+ (id)syncEntityIdentifier;
+ (id)_syncObjectsGenerationPredicate;
+ (BOOL)_shouldInsertReceivedCodableAccount:(id)a0;

@end
