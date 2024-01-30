@interface RBXNUWrapper : NSObject {
    struct __IOGPUDevice { } *_gpuDevice;
}

+ (id)sharedWrapper;

- (id)init;
- (void)setGPURole:(unsigned char)a0 forPid:(int)a1;

@end
