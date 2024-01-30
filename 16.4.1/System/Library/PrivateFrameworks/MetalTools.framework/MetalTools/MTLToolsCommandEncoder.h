@class NSString;
@protocol MTLToolsRetainingContainer, MTLDevice;

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder>

@property (readonly, nonatomic) id<MTLToolsRetainingContainer> commandBuffer;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endEncoding;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (void)popDebugGroup;
- (unsigned long long)globalTraceObjectID;
- (void)pushDebugGroup:(id)a0;
- (void)insertDebugSignpost:(id)a0;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)addRetainedObject:(id)a0;
- (id)initWithBaseObject:(id)a0 parallelRenderCommandEncoder:(id)a1;

@end
