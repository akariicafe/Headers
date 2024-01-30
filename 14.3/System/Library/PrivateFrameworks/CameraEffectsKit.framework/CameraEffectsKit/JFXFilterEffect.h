@interface JFXFilterEffect : JFXEffect

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)enablePresentationState:(BOOL)a0;
- (id)initWithEffectID:(id)a0;
- (void)setForceRenderAtPosterFrame:(BOOL)a0;
- (id)filterContentDataSource;

@end
