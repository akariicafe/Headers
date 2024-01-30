@class NSArray, PSPointerPortalSourceCollection, NSValue, PSMatchMoveSource, PSPointerShape;

@interface PSPointerHoverRegion : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;
@property (readonly, nonatomic) unsigned int coordinateSpaceSourceContextID;
@property (readonly, copy, nonatomic) PSPointerPortalSourceCollection *pointerPortalSourceCollection;
@property (readonly, copy, nonatomic) PSMatchMoveSource *contentMatchMoveSource;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (readonly, nonatomic) double contentHoverInverseScale;
@property (readonly, copy, nonatomic) NSValue *contentSlipValue;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hitTestBounds;
@property (readonly, nonatomic, getter=isOverlayEffectVisible) BOOL overlayEffectVisible;
@property (readonly, nonatomic) long long overlayEffectStyle;
@property (readonly, nonatomic) unsigned long long preferredPointerMaterialLuminance;
@property (readonly, copy, nonatomic) PSPointerShape *pointerShape;
@property (readonly, copy, nonatomic) NSValue *pointerSlipValue;
@property (readonly, nonatomic) unsigned long long pointerRecenteringAxes;
@property (readonly, nonatomic) unsigned long long pointerLatchingAxes;
@property (readonly, nonatomic) double pointerVisualIntensity;
@property (readonly, nonatomic) BOOL shouldPointerUnderlayContent;
@property (readonly, nonatomic) BOOL shouldPointerSuppressMirroring;
@property (readonly, copy, nonatomic) NSArray *accessories;

- (void)encodeWithCoder:(id)a0;
- (id)_copyWithClass:(Class)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isLatching;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNumericDataValid;

@end
