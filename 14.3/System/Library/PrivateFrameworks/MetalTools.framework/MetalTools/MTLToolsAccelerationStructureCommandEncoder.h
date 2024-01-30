@class NSString;
@protocol MTLDevice;

@interface MTLToolsAccelerationStructureCommandEncoder : MTLToolsCommandEncoder <MTLAccelerationStructureCommandEncoderSPI>

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)updateFence:(id)a0;
- (void)useHeap:(id)a0;
- (void)waitForFence:(id)a0;
- (void)copyAccelerationStructure:(id)a0 toAccelerationStructure:(id)a1;
- (void)buildAccelerationStructure:(id)a0 descriptor:(id)a1 scratchBuffer:(id)a2 scratchBufferOffset:(unsigned long long)a3;
- (void)refitAccelerationStructure:(id)a0 descriptor:(id)a1 destination:(id)a2 scratchBuffer:(id)a3 scratchBufferOffset:(unsigned long long)a4;
- (void)writeCompactedAccelerationStructureSize:(id)a0 toBuffer:(id)a1 offset:(unsigned long long)a2;
- (void)copyAndCompactAccelerationStructure:(id)a0 toAccelerationStructure:(id)a1;
- (void)writeSerializedAccelerationStructureSize:(id)a0 toBuffer:(id)a1 sizeBufferOffset:(unsigned long long)a2;
- (void)writeDeserializedAccelerationStructureSize:(id)a0 serializedOffset:(unsigned long long)a1 toBuffer:(id)a2 sizeBufferOffset:(unsigned long long)a3;
- (void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)a0 serializedOffset:(unsigned long long)a1 toBuffer:(id)a2 sizesBufferOffset:(unsigned long long)a3;
- (void)serializeAccelerationStructure:(id)a0 toBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2;
- (void)deserializeAccelerationStructure:(id)a0 fromBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)deserializeAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 fromBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3;
- (void)writeGeometrySizeOfAccelerationStructure:(id)a0 toBuffer:(id)a1 sizeBufferOffset:(unsigned long long)a2;
- (void)writeGeometryOfAccelerationStructure:(id)a0 toBuffer:(id)a1 geometryBufferOffset:(unsigned long long)a2;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;

@end
