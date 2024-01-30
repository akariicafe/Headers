@interface PKImageResizingConstraints : NSObject {
    int _constraintType;
    double _fixedDimension;
    struct CGSize { double width; double height; } _size;
    double _minAspectRatio;
    double _maxAspectRatio;
    BOOL _respectAspectRatioRange;
}

@property (nonatomic) double outputScale;
@property (nonatomic) double outputBorderTrim;
@property (nonatomic) double outputCornerRadius;
@property (nonatomic) BOOL outputMirrored;

+ (id)constraintsWithAspectFillToSize:(struct CGSize { double x0; double x1; })a0;
+ (id)constraintsWithMinSize:(struct CGSize { double x0; double x1; })a0;
+ (id)constraintsWithFixedSize:(struct CGSize { double x0; double x1; })a0;
+ (id)constraintsWithFixedWidth:(double)a0 minAspectRatio:(double)a1 maxAspectRatio:(double)a2;
+ (id)constraintsWithFixedHeight:(double)a0 minAspectRatio:(double)a1 maxAspectRatio:(double)a2;
+ (id)constraintsWithMaxSize:(struct CGSize { double x0; double x1; })a0 minAspectRatio:(double)a1 maxAspectRatio:(double)a2;
+ (id)constraintsWithFixedLargeDimenstion:(double)a0 minAspectRatio:(double)a1 maxAspectRatio:(double)a2;
+ (id)constraintsWithFixedSmallDimenstion:(double)a0 minAspectRatio:(double)a1 maxAspectRatio:(double)a2;
+ (id)constraintsWithMaxSize:(struct CGSize { double x0; double x1; })a0;
+ (id)constraintsWithMinSize:(struct CGSize { double x0; double x1; })a0 minAspectRatio:(double)a1 maxAspectRatio:(double)a2;
+ (id)constraintsWithAspectFitToSize:(struct CGSize { double x0; double x1; })a0;

- (id)resizedImage:(id)a0;
- (BOOL)getPixelCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 pixelOutputSize:(struct CGSize { double x0; double x1; } *)a1 forImage:(id)a2;
- (id)_flippedConstraints;
- (BOOL)_reasonable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getDrawRectForImage:(struct CGImage { } *)a0 withOutputSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)_getPixelCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 pixelOutputSize:(struct CGSize { double x0; double x1; } *)a1 forImageSize:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;
- (id)init;

@end
