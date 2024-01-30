@interface MPSCPUAccelerationStructure : NSObject {
    void *_bvh;
}

- (void *)bvh;
- (void)dealloc;
- (void)rebuildWithDescriptor:(id)a0;

@end
