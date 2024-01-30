@interface CARScreenViewArea : NSObject

@property (nonatomic) BOOL displaysTransitionControl;
@property (nonatomic) unsigned long long statusBarEdge;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unadjustedSafeFrame;
@property (nonatomic) BOOL supportsFocusTransfer;
@property (nonatomic) BOOL supportsUIOutsideSafeArea;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeFrame;

+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetsForOEMUIWithDisplaySize:(struct CGSize { double x0; double x1; })a0 safeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 viewAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPropertySupplier:(id /* block */)a0 additionalInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1 viewAreaDictionary:(id)a2 displayPixelSize:(struct CGSize { double x0; double x1; })a3 wantsCornerMasks:(BOOL)a4;
- (BOOL)isEqualToViewArea:(id)a0;
- (id)initWithPropertySupplier:(id /* block */)a0;
- (id)initWithPropertySupplier:(id /* block */)a0 additionalInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
