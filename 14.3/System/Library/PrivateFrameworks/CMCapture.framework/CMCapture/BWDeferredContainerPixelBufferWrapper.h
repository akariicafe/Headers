@class BWDeferredContainerPixelBufferPoolWrapper;

@interface BWDeferredContainerPixelBufferWrapper : NSObject {
    BWDeferredContainerPixelBufferPoolWrapper *_owner;
}

- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 owner:(id)a1;

@end
