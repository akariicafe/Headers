@class NSArray;

@interface EQKitCompoundBox : EQKitBox {
    double mHeight;
    double mDepth;
    double mWidth;
    BOOL mDimensionsValid;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mErasableBounds;
    BOOL mErasableBoundsValid;
}

@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double depth;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) NSArray *childBoxes;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cacheErasableBounds;
- (id)initWithChildBoxes:(id)a0;
- (void)p_cacheDimensionsForHeight:(double *)a0 depth:(double *)a1 width:(double *)a2;

@end
