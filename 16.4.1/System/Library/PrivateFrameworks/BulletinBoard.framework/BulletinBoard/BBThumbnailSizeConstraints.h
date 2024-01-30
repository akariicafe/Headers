@interface BBThumbnailSizeConstraints : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long constraintType;
@property (nonatomic) float fixedWidth;
@property (nonatomic) float fixedHeight;
@property (nonatomic) float fixedDimension;
@property (nonatomic) float minAspectRatio;
@property (nonatomic) float maxAspectRatio;
@property (nonatomic) float thumbnailScale;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)areReasonable;
- (struct CGSize { double x0; double x1; })sizeFromAspectRatio:(double)a0;

@end
