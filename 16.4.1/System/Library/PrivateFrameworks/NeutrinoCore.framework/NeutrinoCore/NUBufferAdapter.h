@class NUPixelFormat, NSString;

@interface NUBufferAdapter : NSObject <NUBuffer, NUBufferProvider> {
    const void *_bytes;
    BOOL _valid;
}

@property (readonly, nonatomic) struct { long long width; long long height; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) long long rowBytes;
@property (readonly, nonatomic) const void *bytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugQuickLookObject;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0;
- (const void *)bytesAtPoint:(struct { long long x0; long long x1; })a0;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1 rowBytes:(long long)a2 bytes:(const void *)a3;
- (void)provideBuffer:(id /* block */)a0;

@end
