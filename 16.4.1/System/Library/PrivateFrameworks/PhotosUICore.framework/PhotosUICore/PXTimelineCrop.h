@interface PXTimelineCrop : NSObject

@property (readonly, nonatomic) double cropScore;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;

+ (id)cropForAsset:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1;

- (id)description;
- (id)initWithCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 score:(double)a1;

@end
