@interface UIPointerHoverEffect : UIPointerEffect

@property (nonatomic) BOOL tintViewTakesOnPointerShape;
@property (nonatomic) long long preferredTintMode;
@property (nonatomic) BOOL prefersShadow;
@property (nonatomic) BOOL prefersScaledContent;

- (id)settings;
- (unsigned long long)options;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (unsigned long long)constrainedAxes;

@end
