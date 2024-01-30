@class IOGPUMetalDevice;
@protocol MTLDevice;

@interface IOGPUMetalCommandQueue : _MTLCommandQueue {
    struct __IOGPUCommandQueue { } *_commandQueue;
    unsigned long long _priority;
    unsigned long long _backgroundPriority;
}

@property (readonly) IOGPUMetalDevice<MTLDevice> *device;

- (void)setCompletionQueue:(id)a0;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (void)submitCommandBuffers:(id *)a0 count:(unsigned long long)a1;
- (unsigned long long)getGPUPriority;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)dealloc;
- (void)_submitCommandBuffers:(id *)a0 count:(unsigned long long)a1;
- (void)setLabel:(id)a0;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (BOOL)_setGPUPriority:(unsigned long long)a0 backgroundPriority:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (unsigned long long)getBackgroundGPUPriority;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;

@end
