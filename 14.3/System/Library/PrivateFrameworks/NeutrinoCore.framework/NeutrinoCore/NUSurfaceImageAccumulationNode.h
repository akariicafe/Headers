@protocol NUMutablePurgeableSurfaceImage;

@interface NUSurfaceImageAccumulationNode : NUImageAccumulationNode

@property (readonly, nonatomic) id<NUMutablePurgeableSurfaceImage> surfaceImage;

- (id)_newImage;

@end
