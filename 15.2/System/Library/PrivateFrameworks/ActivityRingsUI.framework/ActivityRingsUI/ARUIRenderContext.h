@interface ARUIRenderContext : NSObject {
    float _drawableDiameter;
    struct { void /* unknown type, empty encoding */ columns[4]; } _skewAdjustmentMatrix;
}

@property (readonly, nonatomic) float drawableDiameter;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } skewAdjustmentMatrix;
@property (nonatomic) BOOL opaque;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ drawableSize;
@property (readonly, nonatomic) float screenScale;
@property (nonatomic) BOOL presentsWithTransaction;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDrawableSize:(SEL)a0;

@end
