@class MTLIOAccelPooledResource, MTLIOAccelDevice;
@protocol MTLDevice;

@interface MTLIOAccelResourcePool : NSObject {
    struct _MTLIOAccelResourcePoolPrivate { struct _MTLIOAccelResourceQueue { MTLIOAccelPooledResource *tqh_first; id *tqh_last; } volatileQueue; struct _MTLIOAccelResourceQueue { MTLIOAccelPooledResource *tqh_first; id *tqh_last; } nonvolatileQueue; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; int count; } _priv;
    Class _resourceClass;
    MTLIOAccelDevice<MTLDevice> *_device;
    unsigned long long age_to_purge;
    unsigned int generation;
}

@property (readonly) struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *resourceArgs;
@property (readonly) unsigned int resourceArgsSize;

- (void)purge;
- (void)setResourceArgs:(const struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a0 resourceArgsSize:(unsigned int)a1;
- (id)initWithDevice:(id)a0 resourceClass:(Class)a1 resourceArgs:(const struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a2 resourceArgsSize:(unsigned int)a3 options:(id)a4;
- (void)purgeWithLock;
- (BOOL)updateResourcePurgeability;
- (int)availableCount;
- (void)dealloc;

@end
