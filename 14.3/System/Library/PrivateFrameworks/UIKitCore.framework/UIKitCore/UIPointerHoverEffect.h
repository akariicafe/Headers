@interface UIPointerHoverEffect : UIPointerEffect

@property (nonatomic) BOOL tintViewTakesOnPointerShape;
@property (nonatomic) long long preferredTintMode;
@property (nonatomic) BOOL prefersShadow;
@property (nonatomic) BOOL prefersScaledContent;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)constrainedAxes;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)settings;
- (unsigned long long)options;

@end
