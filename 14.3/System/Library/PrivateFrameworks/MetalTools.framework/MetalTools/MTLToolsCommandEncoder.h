@class NSString, MTLToolsCommandBuffer;
@protocol MTLDevice;

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder>

@property (readonly, nonatomic) MTLToolsCommandBuffer *commandBuffer;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)globalTraceObjectID;
- (void)pushDebugGroup:(id)a0;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (void)insertDebugSignpost:(id)a0;
- (void)endEncoding;
- (void)popDebugGroup;
- (void)addRetainedObject:(id)a0;

@end
