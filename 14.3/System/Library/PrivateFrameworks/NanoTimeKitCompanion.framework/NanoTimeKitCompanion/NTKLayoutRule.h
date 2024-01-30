@class CLKDevice;

@interface NTKLayoutRule : NSObject <NSCopying>

@property (readonly, nonatomic) CLKDevice *device;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceFrame;
@property (nonatomic) long long horizontalLayout;
@property (nonatomic) long long verticalLayout;
@property (nonatomic) BOOL clipsToReferenceFrame;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumSize;

+ (id)layoutRuleForDevice:(id)a0 withReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 horizontalLayout:(long long)a2 verticalLayout:(long long)a3;
+ (id)layoutRuleForDevice:(id)a0 withReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 horizontalLayout:(long long)a2 verticalLayout:(long long)a3 clip:(BOOL)a4 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)validate;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initForDevice:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateLayoutFrameForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (id)layoutRuleByConvertingToCoordinateSpaceWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)calculateLayoutFrameWidthForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (double)calculateLayoutFrameHeightForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (double)calculateLayoutFrameXOriginForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (double)calculateLayoutFrameYOriginForBoundsSize:(struct CGSize { double x0; double x1; })a0;

@end
