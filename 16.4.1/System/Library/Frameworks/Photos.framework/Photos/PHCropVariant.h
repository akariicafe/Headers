@interface PHCropVariant : NSObject

@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) double cropScore;
@property (readonly, nonatomic) long long cropType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;

- (id)initWithCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cropType:(long long)a1 scaleFactor:(double)a2 cropScore:(double)a3;

@end
