@class NSArray;

@interface MPSCPUPrimitiveAccelerationStructureDescriptor : MPSCPUAccelerationStructureDescriptor {
    NSArray *_geometryDescriptors;
}

@property (retain, nonatomic) NSArray *geometryDescriptors;

- (void)dealloc;

@end
