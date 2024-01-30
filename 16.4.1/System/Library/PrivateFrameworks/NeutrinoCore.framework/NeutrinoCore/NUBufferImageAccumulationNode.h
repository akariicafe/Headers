@protocol NUMutablePurgeableBufferImage;

@interface NUBufferImageAccumulationNode : NUImageAccumulationNode

@property (readonly, nonatomic) id<NUMutablePurgeableBufferImage> bufferImage;

- (id)_newImage;

@end
