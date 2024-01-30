@interface HDVersionedOriginalFHIRResourceSyncEntity : HDFHIRResourceSyncEntity

+ (id)syncEntityIdentifier;
+ (id)_syncObjectsGenerationPredicate;
+ (BOOL)_shouldInsertReceivedCodableResource:(id)a0;

@end
