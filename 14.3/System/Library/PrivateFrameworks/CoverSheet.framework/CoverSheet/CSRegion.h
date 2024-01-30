@class NSString;
@protocol UICoordinateSpace;

@interface CSRegion : NSObject <NSCopying, UICoordinateSpace>

@property (readonly, weak, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extent;
@property (nonatomic) long long role;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<UICoordinateSpace> identity;
@property (weak, nonatomic) id provider;
@property (nonatomic, getter=isReservedForHorizontalScrolling) BOOL reservedForHorizontalScrolling;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)regionForCoordinateSpace:(id)a0;
+ (id)regionForCoordinateSpace:(id)a0 withExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)regionForCoordinateSpace:(id)a0;
- (BOOL)intersectsCoordinateSpace:(id)a0;
- (id)initWithCoordinateSpace:(id)a0 withExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 role:(long long)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateSpace:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromCoordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)role:(long long)a0;

@end
