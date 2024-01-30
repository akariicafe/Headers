@interface SBFColorBoxes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) unsigned long long downsampledBoxSize;
@property (readonly, nonatomic) unsigned long long effectiveDownsampleFactor;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned char totalContrast8;
@property (readonly, nonatomic) struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *colorBoxesRowMajor;
@property (readonly, nonatomic) unsigned long long rowCount;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) unsigned long long size;

+ (id)colorBoxesForImage:(id)a0;

- (double)contrast;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)colorBoxAtRow:(unsigned long long)a0 col:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithColorBoxes:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 size:(unsigned long long)a1 rowCount:(unsigned long long)a2 columnCount:(unsigned long long)a3 totalContrast8:(unsigned char)a4 imageSize:(struct CGSize { double x0; double x1; })a5 downsampledBoxSize:(unsigned long long)a6 effectiveDownsampleFactor:(unsigned long long)a7 pixelHeight:(unsigned long long)a8 pixelWidth:(unsigned long long)a9;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForColorBoxAtRow:(unsigned long long)a0 col:(unsigned long long)a1;
- (void)dealloc;

@end
