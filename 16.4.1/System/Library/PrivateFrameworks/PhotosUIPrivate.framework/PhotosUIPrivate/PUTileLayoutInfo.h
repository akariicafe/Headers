@class NSString, NSIndexPath, PUTileIdentifier;
@protocol PUTilingCoordinateSystem;

@interface PUTileLayoutInfo : NSObject <NSCopying>

@property (retain, nonatomic, setter=_setTileIdentifier:) PUTileIdentifier *tileIdentifier;
@property (nonatomic, setter=_setCenter:) struct CGPoint { double x; double y; } center;
@property (nonatomic, setter=_setSize:) struct CGSize { double width; double height; } size;
@property (nonatomic, setter=_setAlpha:) double alpha;
@property (nonatomic, setter=_setCornerRadius:) double cornerRadius;
@property (retain, nonatomic, setter=_setCornerCurve:) NSString *cornerCurve;
@property (nonatomic, setter=_setCornerMask:) unsigned long long cornerMask;
@property (nonatomic, setter=_setTransform:) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic, setter=_setZPosition:) double zPosition;
@property (retain, nonatomic, setter=_setCoordinateSystem:) id<PUTilingCoordinateSystem> coordinateSystem;
@property (nonatomic) struct { double left; double right; double top; double bottom; } expandedRectInsets;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSString *tileKind;
@property (readonly, nonatomic) NSString *dataSourceIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestOutset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)clone;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })parallaxOffset;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 cornerRadius:(double)a4 cornerCurve:(id)a5 cornerMask:(unsigned long long)a6 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a7 zPosition:(double)a8 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9 coordinateSystem:(id)a10;
- (id)layoutInfoWithCoordinateSystem:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cropInsets;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 cornerRadius:(double)a4 cornerCurve:(id)a5 cornerMask:(unsigned long long)a6 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a7 zPosition:(double)a8 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9 hitTestOutset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a10 coordinateSystem:(id)a11;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 coordinateSystem:(id)a7;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 hitTestOutset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a7 coordinateSystem:(id)a8;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 coordinateSystem:(id)a6;
- (BOOL)isGeometryEqualToLayoutInfo:(id)a0;
- (id)layoutInfoByInterpolatingWithLayoutInfo:(id)a0 mixFactor:(double)a1 coordinateSystem:(id)a2;
- (id)layoutInfoWithAlpha:(double)a0;
- (id)layoutInfoWithCenter:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 alpha:(double)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 zPosition:(double)a4 coordinateSystem:(id)a5;
- (id)layoutInfoWithCenter:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)layoutInfoWithIndexPath:(id)a0 tileKind:(id)a1 dataSourceIdentifier:(id)a2;
- (id)layoutInfoWithZPosition:(double)a0;

@end
