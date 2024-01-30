@interface CSMagSafeSilhouetteConfiguration : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double bottomOffset;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long roundedCorners;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 bottomOffset:(double)a1 cornerRadius:(double)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 bottomOffset:(double)a1 cornerRadius:(double)a2 roundedCorners:(unsigned long long)a3;
- (unsigned long long)roundedCornersMaskForOrientation:(long long)a0;

@end
