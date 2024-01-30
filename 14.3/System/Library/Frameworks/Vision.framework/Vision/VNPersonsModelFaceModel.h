@class NSMapTable;

@interface VNPersonsModelFaceModel : NSObject <NSSecureCoding> {
    NSMapTable *_serialNumberToPersonUniqueIdentifierMapTable;
    struct shared_ptr<vision::mod::FaceIDModel> { struct FaceIDModel *__ptr_; struct __shared_weak_count *__cntrl_; } _faceIDModel;
    unsigned long long _faceprintRequestRevision;
    int _maximumElementsPerID;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> { struct ImageDescriptorBufferFloat32 *x0; struct __shared_weak_count *x1; })_concatenateFaceprintImageDescriptorBuffer:(struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> { struct ImageDescriptorBufferFloat32 *x0; struct __shared_weak_count *x1; })a0 withFaceprints:(id)a1 forIdentityWithSerialNumber:(int)a2 faceprintLabels:(struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } *)a3;
+ (id)modelBuiltFromConfiguration:(id)a0 dataProvider:(id)a1 canceller:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (unsigned long long)faceprintRequestRevision;
- (unsigned long long)personCount;
- (id)personUniqueIdentifiers;
- (id)faceCountsForAllPersons;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)a0;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)a0;
- (id)initWithFaceIDModel:(struct shared_ptr<vision::mod::FaceIDModel> { struct FaceIDModel *x0; struct __shared_weak_count *x1; })a0 faceprintRequestRevision:(unsigned long long)a1 maximumElementsPerID:(unsigned long long)a2 personUniqueIdentifierToSerialNumberMapping:(id)a3;
- (BOOL)_getSerialNumber:(int *)a0 forPersonUniqueIdentifier:(id)a1 error:(id *)a2;
- (id)_personPredictionsForFace:(id)a0 withDescriptor:(const struct ImageDescriptorBufferFloat32 { void /* function */ **x0; struct vector<long long, std::__1::allocator<long long> > { long long *x0; long long *x1; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x0; } x2; } x1; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x0; } x2; } x0; } x2; void *x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; unsigned long long x8; int x9; float *x10; } *)a1 limit:(unsigned long long)a2 faceIDCanceller:(struct CVMLCanceller { void /* function */ **x0; BOOL x1; int x2; } *)a3 error:(id *)a4;
- (id)personPredictionsForFace:(id)a0 withDescriptor:(const struct ImageDescriptorBufferFloat32 { void /* function */ **x0; struct vector<long long, std::__1::allocator<long long> > { long long *x0; long long *x1; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x0; } x2; } x1; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x0; } x2; } x0; } x2; void *x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; unsigned long long x8; int x9; float *x10; } *)a1 limit:(unsigned long long)a2 canceller:(id)a3 error:(id *)a4;
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
