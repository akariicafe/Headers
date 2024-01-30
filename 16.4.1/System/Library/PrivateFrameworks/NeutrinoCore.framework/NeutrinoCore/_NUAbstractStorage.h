@class NSString, NUMutableRegion, NUColorSpace, NUPixelFormat, NURegion;

@interface _NUAbstractStorage : NSObject <NUImageStorage> {
    NUMutableRegion *_validRegion;
}

@property struct { long long width; long long height; } size;
@property long long sizeInBytes;
@property (retain) NUPixelFormat *format;
@property (readonly) NURegion *validRegion;
@property (retain) NUColorSpace *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (long long)readBufferInRegion:(id)a0 block:(id /* block */)a1;
- (long long)useAsCIImageWithOptions:(id)a0 renderer:(id)a1 block:(id /* block */)a2;
- (long long)useAsCIRenderDestinationWithRenderer:(id)a0 block:(id /* block */)a1;
- (long long)writeBufferInRegion:(id)a0 block:(id /* block */)a1;
- (void)validateRegion:(id)a0;
- (void)_resetSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)assertIsValidInRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (void)assertIsValidInRegion:(id)a0;
- (long long)copyFromStorage:(id)a0 region:(id)a1;
- (long long)fillBufferWithPattern4:(unsigned int)a0;
- (BOOL)isValidInRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (BOOL)isValidInRegion:(id)a0;
- (void)provideBuffer:(id /* block */)a0;
- (void)provideMutableBuffer:(id /* block */)a0;
- (long long)useAsCVPixelBufferWithBlock:(id /* block */)a0;
- (void)validateRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;

@end
