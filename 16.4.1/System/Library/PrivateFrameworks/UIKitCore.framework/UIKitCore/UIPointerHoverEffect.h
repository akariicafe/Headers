@interface UIPointerHoverEffect : UIPointerEffect

@property (nonatomic) BOOL _tintViewTakesOnPointerShape;
@property (nonatomic) BOOL _tintViewUsesPointerMaterial;
@property (nonatomic) long long preferredTintMode;
@property (nonatomic) BOOL prefersShadow;
@property (nonatomic) BOOL prefersScaledContent;

- (unsigned long long)options;
- (id)settings;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)constrainedAxes;

@end
