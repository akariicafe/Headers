@class MTLTelemetryDevice;

@interface MTLTelemetryComputePipelineState : MTLToolsComputePipelineState {
    unsigned int uniqueID;
    MTLTelemetryDevice *device;
}

+ (unsigned int)generateUniqueID;

- (void)accumulateUsage;
- (id)initWithComputePipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 descriptor:(id)a3;

@end
