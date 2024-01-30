@class MTLIOAccelDevice;
@protocol MTLDevice;

@interface MTLIOAccelCommandQueue : _MTLCommandQueue {
    struct __IOAccelCommandQueue { } *_commandQueue;
    unsigned long long _priority;
    unsigned long long _backgroundPriority;
}

@property (readonly) MTLIOAccelDevice<MTLDevice> *device;

- (void)setCompletionQueue:(id)a0;
- (void)submitCommandBuffers:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (unsigned long long)getBackgroundGPUPriority;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (BOOL)_setGPUPriority:(unsigned long long)a0 backgroundPriority:(unsigned long long)a1;
- (unsigned long long)getGPUPriority;
- (void)dealloc;
- (void)setLabel:(id)a0;

@end
