@class IOGPUMetalDeviceShmemPool, IOGPUMetalDevice;

@interface IOGPUMetalDeviceShmem : NSObject {
    struct _IOGPUMetalDeviceShmemPrivate { IOGPUMetalDeviceShmemPool *pool; struct { IOGPUMetalDeviceShmem *tqe_next; id *tqe_prev; } entry; unsigned long long time_added; void *shmemStart; unsigned long long shmemSize; } _priv;
    IOGPUMetalDevice *_device;
    BOOL purgeable;
}

@property (readonly) void *virtualAddress;
@property (readonly) unsigned int shmemID;
@property (readonly) unsigned int shmemSize;

- (void)dealloc;
- (id)initWithDevice:(id)a0 shmemSize:(unsigned int)a1 shmemType:(int)a2;

@end
