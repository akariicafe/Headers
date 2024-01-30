@class NSDictionary, NSMapTable;

@interface VNPersonsModelFaceModelVIPv2 : VNPersonsModelFaceModel {
    NSMapTable *_serialNumberToPersonUniqueIdentifierMapTable;
    NSDictionary *_cachedPersonUniqueIdentifierToFaceprintCountMapping;
    struct shared_ptr<vision::mod::FaceIDModel> { struct FaceIDModel *__ptr_; struct __shared_weak_count *__cntrl_; } _faceIDModel;
    unsigned long long _faceprintRequestRevision;
    int _maximumElementsPerID;
}

+ (BOOL)supportsSecureCoding;
+ (struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> { struct ImageDescriptorBufferFloat32 *x0; struct __shared_weak_count *x1; })_concatenateFaceprintImageDescriptorBuffer:(struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> { struct ImageDescriptorBufferFloat32 *x0; struct __shared_weak_count *x1; })a0 withFaceprints:(id)a1 forIdentityWithSerialNumber:(int)a2 faceprintLabels:(void *)a3;
+ (BOOL)getStoredRepresentationTag:(unsigned int *)a0 forModelVersion:(unsigned long long)a1 error:(id *)a2;
+ (id)modelBuiltFromConfiguration:(id)a0 dataProvider:(id)a1 canceller:(id)a2 error:(id *)a3;

- (id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (unsigned long long)faceprintRequestRevision;
- (void)encodeWithCoder:(id)a0;
- (id)faceCountsForAllPersons;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)initWithFaceIDModel:(struct shared_ptr<vision::mod::FaceIDModel> { struct FaceIDModel *x0; struct __shared_weak_count *x1; })a0 faceprintRequestRevision:(unsigned long long)a1 maximumElementsPerID:(unsigned long long)a2 personUniqueIdentifierToSerialNumberMapping:(id)a3;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)a0;
- (id)_personPredictionsForFace:(id)a0 withDescriptor:(const void *)a1 limit:(unsigned long long)a2 faceIDCanceller:(struct CVMLCanceller { void /* function */ **x0; BOOL x1; int x2; } *)a3 error:(id *)a4;
- (id)personUniqueIdentifiers;
- (id)personPredictionsForFace:(id)a0 withDescriptor:(const void *)a1 limit:(unsigned long long)a2 canceller:(id)a3 error:(id *)a4;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)a0;
- (unsigned long long)personCount;
- (BOOL)_getSerialNumber:(int *)a0 forPersonUniqueIdentifier:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
