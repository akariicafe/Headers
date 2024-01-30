@interface MTLGPUDebugAccelerationStructureCommandEncoder : MTLToolsAccelerationStructureCommandEncoder

- (void)serializeInstanceAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 toBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3;
- (void)deserializeInstanceAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 fromBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3;
- (void)deserializeAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 fromBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3;
- (void)deserializeInstanceAccelerationStructure:(id)a0 primitiveAccelerationStructures:(id)a1 fromBuffer:(id)a2 serializedBufferOffset:(unsigned long long)a3 withDescriptor:(id)a4;

@end
