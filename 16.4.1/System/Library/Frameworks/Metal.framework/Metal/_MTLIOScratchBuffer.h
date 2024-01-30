@class NSString;
@protocol MTLBuffer;

@interface _MTLIOScratchBuffer : NSObject <MTLIOScratchBuffer> {
    struct MTLIOScratchBufferPrivate { struct { struct MTLIOScratchBufferPrivate *x0; struct MTLIOScratchBufferPrivate **x1; } x0; id x1; id x2; unsigned long long x3; unsigned long long x4; BOOL x5; } *_priv;
}

@property (readonly) id<MTLBuffer> buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(struct MTLIOScratchBufferPrivate { struct { struct MTLIOScratchBufferPrivate *x0; struct MTLIOScratchBufferPrivate **x1; } x0; id x1; id x2; unsigned long long x3; unsigned long long x4; BOOL x5; } *)a0;
- (void)dealloc;

@end
