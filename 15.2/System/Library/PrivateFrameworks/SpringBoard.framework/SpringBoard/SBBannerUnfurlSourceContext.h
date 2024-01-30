@interface SBBannerUnfurlSourceContext : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceCoordinateSpaceBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceFrame;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } referenceVelocity;

- (id)_copyWithClass:(Class)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
