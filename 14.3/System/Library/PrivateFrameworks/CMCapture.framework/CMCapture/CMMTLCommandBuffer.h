@class CMMTLCommandQueue, NSMutableDictionary, NSDictionary, NSString, NSError, NSMutableString, InterceptConfig;
@protocol MTLDevice, MTLLogContainer, MTLCommandBuffer, MTLCommandQueue;

@interface CMMTLCommandBuffer : NSObject <MTLCommandBufferSPI> {
    NSMutableString *_cmLabel;
    CMMTLCommandQueue *_cmCommandQueue;
    id<MTLCommandBuffer> _commandBuffer;
    BOOL _unretained;
}

@property (retain, nonatomic) InterceptConfig *interceptConfig;
@property (readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly, nonatomic) NSMutableDictionary *userDictionary;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLCommandQueue> commandQueue;
@property (readonly) BOOL retainedReferences;
@property (readonly) unsigned long long errorOptions;
@property (copy) NSString *label;
@property (readonly) double kernelStartTime;
@property (readonly) double kernelEndTime;
@property (readonly) id<MTLLogContainer> logs;
@property (readonly) double GPUStartTime;
@property (readonly) double GPUEndTime;
@property (readonly) unsigned long long status;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commit;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)waitUntilScheduled;
- (id)initWithCMMTLCommandQueue:(id)a0 unretained:(BOOL)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)waitUntilCompleted;

@end
