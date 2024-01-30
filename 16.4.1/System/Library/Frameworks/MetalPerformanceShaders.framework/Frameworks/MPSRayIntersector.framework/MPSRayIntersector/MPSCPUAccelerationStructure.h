@interface MPSCPUAccelerationStructure : NSObject {
    void *_bvh;
    unsigned long long _branchingFactor;
}

- (void)dealloc;
- (unsigned long long)branchingFactor;
- (void)rebuildWithDescriptor:(id)a0;
- (void *)bvh;

@end
