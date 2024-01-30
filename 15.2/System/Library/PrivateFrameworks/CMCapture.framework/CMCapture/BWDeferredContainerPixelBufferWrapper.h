@class BWDeferredContainerPixelBufferPoolWrapper;

@interface BWDeferredContainerPixelBufferWrapper : NSObject {
    BWDeferredContainerPixelBufferPoolWrapper *_owner;
}

- (void)dealloc;

@end
