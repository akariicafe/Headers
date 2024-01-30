@class NSObject, NSString, NUImageLayout, NUColorSpace, NSPointerArray, NUPixelFormat, NURegion;
@protocol OS_dispatch_queue, NUStorageFactory;

@interface _NUImage : NSObject <NUImage, NUMutableImage, NUImageCopying, NUPurgeableImage, NUMutablePurgeableImage> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSPointerArray *_tiles;
    id<NUStorageFactory> _tileFactory;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } _accessCount;
}

@property (readonly) NUImageLayout *layout;
@property (readonly) NUPixelFormat *format;
@property (readonly) NUColorSpace *colorSpace;
@property (readonly) struct { long long x0; long long x1; } size;
@property (copy) NURegion *validRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)tileAtIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (id)immutableImageCopy;
- (id)mutableImageCopy;
- (id)purgeableImageCopy;
- (id)mutablePurgeableImageCopy;
- (BOOL)copySurfaceStorage:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toPoint:(struct { long long x0; long long x1; })a2 device:(id)a3;
- (BOOL)copyBufferStorage:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toPoint:(struct { long long x0; long long x1; })a2;
- (BOOL)beginAccess;
- (BOOL)beginAccessRegion:(id)a0;
- (void)endAccess;
- (void)endAccessRegion:(id)a0;
- (void)writeRegion:(id)a0 withBlock:(id /* block */)a1;
- (void)readRegion:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithLayout:(id)a0 format:(id)a1 colorSpace:(id)a2 tileFactory:(id)a3;
- (id)_tileAtIndex:(unsigned long long)a0;
- (id)_createOrCopyTile:(id)a0 tileInfo:(id)a1 writeRegion:(id)a2;
- (id)_purgeableCopy;
- (id)_nonPurgeableCopy;

@end
