@class NSArray, VNRequestSpecifier;

@interface VNEntityIdentificationModelTrainedModelVIPv3 : VNEntityIdentificationModelTrainedModel {
    struct shared_ptr<vision::mod::FaceID3Model> { struct FaceID3Model *__ptr_; struct __shared_weak_count *__cntrl_; } _faceIDModel;
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;
    NSArray *_entityUniqueIdentifiers;
    NSArray *_entityPrintCounts;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)getStoredRepresentationTag:(unsigned int *)a0 forModelVersion:(unsigned long long)a1 error:(id *)a2;
+ (id)trainedModelBuiltFromConfiguration:(id)a0 dataProvider:(id)a1 canceller:(id)a2 error:(id *)a3;

- (unsigned long long)entityCount;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)entityPrintOriginatingRequestSpecifier;
- (id)entityUniqueIdentifiers;
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)a0;
- (id)initWithFaceIDModel:(struct shared_ptr<vision::mod::FaceID3Model> { struct FaceID3Model *x0; struct __shared_weak_count *x1; })a0 entityPrintOriginatingRequestSpecifier:(id)a1 entityUniqueIdentifiers:(id)a2 entityPrintCounts:(id)a3;
- (id)predictionsForObservation:(id)a0 limit:(unsigned long long)a1 canceller:(id)a2 error:(id *)a3;
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)a0;
- (id)printCountsForAllEntities;
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)a0;
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)a0;

@end
