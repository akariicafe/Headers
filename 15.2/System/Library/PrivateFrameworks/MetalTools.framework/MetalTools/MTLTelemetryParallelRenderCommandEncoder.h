@class MTLRenderPassDescriptor, MTLTelemetryDevice, MTLTelemetryCommandBuffer;

@interface MTLTelemetryParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    MTLTelemetryDevice *_telemetryDevice;
    MTLTelemetryCommandBuffer *_telemetryCommandBuffer;
    MTLRenderPassDescriptor *_descriptor;
    unsigned int _encoderCount;
}

- (void)endEncoding;
- (id)renderCommandEncoder;
- (id)initWithBaseRenderPass:(id)a0 commandBuffer:(id)a1 descriptor:(id)a2;

@end
