@class NUPixelFormat, NSString, NURegion;

@interface NUBufferStorage : _NUAbstractBufferStorage <NUBuffer, NUMutableBuffer, NUPurgeableStorage> {
    long long _purgeLevel;
    long long _length;
    BOOL _purgeable;
    _Atomic int _useCount;
}

@property (readonly, nonatomic) struct { long long x0; long long x1; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) long long rowBytes;
@property (readonly, nonatomic) void *bytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) void *mutableBytes;
@property (readonly) long long sizeInBytes;
@property (readonly) NURegion *validRegion;

- (BOOL)isPurged;
- (int)useCount;
- (BOOL)isShared;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)dealloc;
- (void)incrementUseCount;
- (BOOL)decrementUseCount;
- (BOOL)isPurgeable;
- (BOOL)isInUse;
- (BOOL)makeNonPurgeable;
- (void)makePurgeable;
- (long long)purgeLevel;
- (void)adjustPurgeLevel:(long long)a0;
- (long long)readBufferInRegion:(id)a0 block:(id /* block */)a1;
- (long long)writeBufferInRegion:(id)a0 block:(id /* block */)a1;
- (long long)useAsCIImageWithOptions:(id)a0 renderer:(id)a1 block:(id /* block */)a2;
- (long long)useAsCIRenderDestinationWithRenderer:(id)a0 block:(id /* block */)a1;
- (id)newRenderDestination;
- (void *)_allocateMemory:(long long)a0;
- (void)_deallocateMemory;
- (int)_fetchPurgeState:(int *)a0;
- (id)_purgeStateDescription;
- (int)_purgeLevelToOSValue:(long long)a0;

@end
