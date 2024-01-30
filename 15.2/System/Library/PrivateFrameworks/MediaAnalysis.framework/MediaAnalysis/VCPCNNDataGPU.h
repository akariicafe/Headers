@interface VCPCNNDataGPU : VCPCNNData

- (int)allocBuffers:(BOOL)a0;
- (int)reallocGPUTemporalBuffers;
- (int)convertCPUData2GPU;
- (int)convertGPUData2CPU;
- (int)bufferAllocGPU;

@end
