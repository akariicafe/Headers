@class NSString;

@interface HMIGreedyClustering : HMFObject <HMFLogging> {
    struct shared_ptr<homeai::clustering::GreedyClusterer> { struct GreedyClusterer *__ptr_; struct __shared_weak_count *__cntrl_; } _greedyClusterer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (float)faceDistanceFromDescriptor:(id)a0 toDescriptor:(id)a1;
+ (BOOL)addFaceObservations:(id)a0 toFaceDescriptorBuffer:(void *)a1 error:(id *)a2;
+ (id)centermostFaceprintInCluster:(id)a0 faceObservations:(id)a1;

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFaceThreshold:(id)a0 singleLinkThreshold:(id)a1 percentConnectionsThreshold:(id)a2 error:(id *)a3;
- (id)convertToClusters:(void *)a0;
- (id)getClustersWithFaces:(id)a0 error:(id *)a1;

@end
