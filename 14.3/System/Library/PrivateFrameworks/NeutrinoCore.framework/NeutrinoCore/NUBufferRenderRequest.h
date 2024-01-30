@protocol NUMutableBufferImage;

@interface NUBufferRenderRequest : NUImageRenderRequest

@property id<NUMutableBufferImage> targetBufferImage;

- (id)submitSynchronous:(out id *)a0;
- (void)submit:(id /* block */)a0;
- (id)newRenderJob;

@end
