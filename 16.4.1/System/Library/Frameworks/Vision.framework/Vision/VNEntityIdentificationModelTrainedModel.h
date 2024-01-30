@interface VNEntityIdentificationModelTrainedModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)getStoredRepresentationTag:(unsigned int *)a0 forModelVersion:(unsigned long long)a1 error:(id *)a2;
+ (id)trainedModelBuiltFromConfiguration:(id)a0 dataProvider:(id)a1 canceller:(id)a2 error:(id *)a3;

- (unsigned long long)entityCount;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)entityPrintOriginatingRequestSpecifier;
- (id)entityUniqueIdentifiers;
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)a0;
- (id)predictionsForObservation:(id)a0 limit:(unsigned long long)a1 canceller:(id)a2 error:(id *)a3;
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)a0;
- (id)printCountsForAllEntities;
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)a0;
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)a0;

@end
