@class NSDictionary;

@interface VNClassificationCustomHierarchy : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {
    struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel *__ptr_; struct __shared_weak_count *__cntrl_; } _hierarchicalModel_DO_NOT_ACCESS_DIRECTLY;
    NSDictionary *_additionalRelationships;
    unsigned long long _sceneClassificationRequestRevision;
    unsigned long long _sceneClassificationRequestDetectionLevel;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *relationships;
@property (readonly, nonatomic) unsigned long long requestRevision;

+ (id)customHierarchyForRequest:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel *x0; struct __shared_weak_count *x1; })hierarchicalModelAndReturnError:(id *)a0;
- (id)initWithSceneClassificationRequestRevision:(unsigned long long)a0 detectionLevel:(unsigned long long)a1;
- (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel *x0; struct __shared_weak_count *x1; })newHierarchicalModelAndReturnError:(id *)a0;
- (BOOL)_addRelationships:(id)a0 error:(id *)a1;
- (id)customHierarchyWithAdditionalParent:(id)a0 children:(id)a1 error:(id *)a2;
- (id)customHierarchyWithAdditionalRelationships:(id)a0 error:(id *)a1;
- (unsigned long long)requestDetectionLevel;
- (void)encodeWithCoder:(id)a0;

@end
