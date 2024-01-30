@protocol TRIPaths;

@interface TRINamespaceDescriptorSetStorage : NSObject {
    id<TRIPaths> _paths;
}

- (BOOL)removeUnreferencedNamespaceDescriptorSetsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (void).cxx_destruct;
- (BOOL)overwriteNamespaceDescriptors:(id)a0 forTreatmentId:(id)a1;
- (BOOL)hasNamespaceDescriptorsForTreatmentWithId:(id)a0 path:(id *)a1;
- (id)pathForNamespaceDescriptorsWithTreatmentId:(id)a0;
- (id)_collectNamespaceDescriptorSets;
- (id)parentDirForNamespaceDescriptorSets;
- (id)initWithPaths:(id)a0;

@end
