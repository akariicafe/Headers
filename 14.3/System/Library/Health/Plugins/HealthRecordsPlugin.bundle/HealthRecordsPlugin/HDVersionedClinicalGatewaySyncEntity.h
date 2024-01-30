@interface HDVersionedClinicalGatewaySyncEntity : HDClinicalGatewaySyncEntity

+ (id)syncEntityIdentifier;
+ (id)_syncObjectsGenerationPredicate;
+ (BOOL)_shouldInsertReceivedCodableGateway:(id)a0 profile:(id)a1;

@end
