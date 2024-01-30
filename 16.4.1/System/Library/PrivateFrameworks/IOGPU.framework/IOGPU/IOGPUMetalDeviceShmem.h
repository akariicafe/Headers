@class IOGPUMetalDeviceShmemPool, IOGPUMetalDevice;

@interface IOGPUMetalDeviceShmem : NSObject {
    struct _IOGPUMetalDeviceShmemPrivate { IOGPUMetalDeviceShmemPool *pool; struct { IOGPUMetalDeviceShmem *tqe_next; id *tqe_prev; } entry; unsigned long long time_added; long long trim_level; long long used_history[8]; int used_history_index; } _priv;
    IOGPUMetalDevice *_device;
    BOOL purgeable;
}

@property (readonly) void *virtualAddress;
@property (readonly) unsigned int shmemID;
@property (readonly) unsigned int shmemSize;

- (id)initWithDevice:(id)a0 shmemSize:(unsigned int)a1 shmemType:(int)a2;
- (void)dealloc;

@end
