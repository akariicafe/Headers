@class IOGPUMetalDevice, IOGPUMetalPooledResource;
@protocol MTLDevice;

@interface IOGPUMetalResourcePool : NSObject {
    struct _IOGPUMetalResourcePoolPrivate { struct _IOGPUMetalResourceQueue { IOGPUMetalPooledResource *tqh_first; id *tqh_last; } volatileQueue; struct _IOGPUMetalResourceQueue { IOGPUMetalPooledResource *tqh_first; id *tqh_last; } nonvolatileQueue; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; int count; } _priv;
    Class _resourceClass;
    IOGPUMetalDevice<MTLDevice> *_device;
    unsigned long long age_to_purge;
    unsigned int generation;
}

@property (readonly) struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x14; } x0; } *resourceArgs;
@property (readonly) unsigned int resourceArgsSize;

- (void)purge;
- (void)setResourceArgs:(const struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x14; } x0; } *)a0 resourceArgsSize:(unsigned int)a1;
- (id)initWithDevice:(id)a0 resourceClass:(Class)a1 resourceArgs:(const struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x14; } x0; } *)a2 resourceArgsSize:(unsigned int)a3 options:(id)a4;
- (void)purgeWithLock;
- (BOOL)updateResourcePurgeability;
- (int)availableCount;
- (void)dealloc;

@end
