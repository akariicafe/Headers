@interface BWPhotoEncoderNodeAttachedMediaConfiguration : NSObject

@property (readonly, nonatomic) float mainImageDownscalingFactor;
@property (readonly, nonatomic) BOOL propagatesDownstream;

- (id)initWithMainImageDownscalingFactor:(float)a0 propagatesDownstream:(BOOL)a1;

@end
