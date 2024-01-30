@class NUPixelFormat, NSString, NUBufferStorage;
@protocol NUBuffer;

@interface NUPixelBuffer : NSObject <NUBuffer, NSCopying, NSMutableCopying> {
    NUBufferStorage *_storage;
    id<NUBuffer> _buffer;
}

@property (readonly, nonatomic) struct { long long x0; long long x1; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) long long rowBytes;
@property (readonly, nonatomic) const void *bytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugQuickLookObject;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (const void *)bytesAtPoint:(struct { long long x0; long long x1; })a0;
- (id)privateInit;

@end
