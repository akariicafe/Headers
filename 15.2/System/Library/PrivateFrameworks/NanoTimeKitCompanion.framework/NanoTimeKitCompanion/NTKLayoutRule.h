@class CLKDevice;

@interface NTKLayoutRule : NSObject <NSCopying>

@property (readonly, nonatomic) CLKDevice *device;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceFrame;
@property (nonatomic) long long horizontalLayout;
@property (nonatomic) long long verticalLayout;
@property (nonatomic) BOOL clipsToReferenceFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumSize;

+ (id)layoutRuleForDevice:(id)a0 withReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 horizontalLayout:(long long)a2 verticalLayout:(long long)a3;
+ (id)layoutRuleForDevice:(id)a0 withReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 horizontalLayout:(long long)a2 verticalLayout:(long long)a3 clip:(BOOL)a4;

- (void)validate;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initForDevice:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateLayoutFrameForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (double)calculateLayoutFrameWidthForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (double)calculateLayoutFrameHeightForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (double)calculateLayoutFrameXOriginForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (double)calculateLayoutFrameYOriginForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (id)layoutRuleByConvertingToCoordinateSpaceWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
