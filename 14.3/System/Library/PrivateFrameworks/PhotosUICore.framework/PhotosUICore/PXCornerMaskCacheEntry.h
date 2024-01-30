@class UIImage;

@interface PXCornerMaskCacheEntry : NSObject

@property (readonly, nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadius;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCornerRadius:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })a0 size:(struct CGSize { double x0; double x1; })a1 image:(id)a2;

@end
