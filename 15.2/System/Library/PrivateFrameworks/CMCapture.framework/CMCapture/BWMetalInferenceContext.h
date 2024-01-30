@protocol MTLCommandQueue, MTLDevice, MTLCommandQueueSPI;

@interface BWMetalInferenceContext : NSObject {
    BOOL _prepared;
    id<MTLCommandQueueSPI> _commandQueueSPI;
}

@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTLDevice> device;

- (void)dealloc;
- (int)prepareForInferenceWithCompletionQueue:(id)a0;
- (id)initWithSchedulerPriority:(unsigned int)a0;

@end
