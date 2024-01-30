@class TSPData, TSUColor;

@interface TSDMutableImageFill : TSDImageFill <NSCopying>

@property (retain, nonatomic) TSPData *imageData;
@property (nonatomic) unsigned long long technique;
@property (copy, nonatomic) TSUColor *tintColor;
@property (nonatomic) struct CGSize { double x0; double x1; } fillSize;
@property (nonatomic) double scale;

- (void)setImageData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTintColor:(id)a0;
- (void)setScale:(double)a0;
- (void)setTechnique:(unsigned long long)a0;
- (void)setFillSize:(struct CGSize { double x0; double x1; })a0;

@end
