@class NSMutableArray;

@interface VKCActionInfoViewLayoutContext : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (nonatomic) double padding;
@property (nonatomic) double scale;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) double currentMaxX;
@property (nonatomic) double currentMinX;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transform;
@property (nonatomic) BOOL didAddLeadingItem;
@property (nonatomic) BOOL didAddTrailingItem;
@property (nonatomic) BOOL animateItemVisibilityChanges;
@property (readonly, nonatomic) double remainingWidth;
@property (nonatomic) BOOL showingMoreButton;
@property (retain, nonatomic) NSMutableArray *leadingLayout;
@property (retain, nonatomic) NSMutableArray *trailingLayout;

- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end
