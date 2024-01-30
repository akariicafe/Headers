@class ISImage, NSData, ISColor;

@interface ISGraphicsContext : NSObject

@property (readonly, nonatomic) unsigned long long preset;
@property (readonly, nonatomic) struct CGContext { } *cgContext;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) ISImage *image;
@property (readonly, nonatomic) NSData *data;
@property (retain, nonatomic) ISColor *fillColor;
@property (retain, nonatomic) ISColor *strokeColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;

+ (id)bitmapContextWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 preset:(unsigned long long)a2;

- (void)strokeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clipToMaskCGImage:(struct CGImage { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)clear;
- (void)dealloc;
- (id)initWithCGContext:(struct CGContext { } *)a0 preset:(unsigned long long)a1;
- (void)strokePath:(struct CGPath { } *)a0;
- (void)drawCGImage:(struct CGImage { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)popState;
- (void)fillPath:(struct CGPath { } *)a0;
- (void)pushState;

@end
