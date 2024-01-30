@class NSArray, VNRequestSpecifier;

@interface VNEntityIdentificationModelTrainedModel : NSObject <NSSecureCoding> {
    struct shared_ptr<vision::mod::FaceIDModel> { struct FaceIDModel *__ptr_; struct __shared_weak_count *__cntrl_; } _faceIDModel;
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;
    int _maximumElementsPerID;
    NSArray *_entityUniqueIdentifiers;
    NSArray *_entityPrintCounts;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)trainedModelBuiltFromConfiguration:(id)a0 dataProvider:(id)a1 canceller:(id)a2 error:(id *)a3;

- (unsigned long long)entityCount;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)entityPrintOriginatingRequestSpecifier;
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)a0;
- (id)initWithFaceIDModel:(struct shared_ptr<vision::mod::FaceIDModel> { struct FaceIDModel *x0; struct __shared_weak_count *x1; })a0 entityPrintOriginatingRequestSpecifier:(id)a1 maximumElementsPerID:(unsigned long long)a2 entityUniqueIdentifiers:(id)a3 entityPrintCounts:(id)a4;
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)predictionsForObservation:(id)a0 limit:(unsigned long long)a1 canceller:(id)a2 error:(id *)a3;
- (id)entityUniqueIdentifiers;
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)a0;
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)a0;
- (id)printCountsForAllEntities;

@end
