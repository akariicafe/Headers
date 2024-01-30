@interface CARScreenViewArea : NSObject

@property (nonatomic) BOOL displaysTransitionControl;
@property (nonatomic) unsigned long long statusBarEdge;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unadjustedSafeFrame;
@property (nonatomic) BOOL supportsFocusTransfer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeFrame;

+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetsForOEMUIWithDisplaySize:(struct CGSize { double x0; double x1; })a0 originalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPropertySupplier:(id /* block */)a0 additionalInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1 scale:(double)a2 viewAreaDictionary:(id)a3 displayPixelSize:(struct CGSize { double x0; double x1; })a4 wantsCornerMasks:(BOOL)a5;
- (BOOL)isEqualToViewArea:(id)a0;
- (id)initWithPropertySupplier:(id /* block */)a0;
- (id)initWithPropertySupplier:(id /* block */)a0 additionalInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
