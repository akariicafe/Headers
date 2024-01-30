@interface JFXFilterEffect : JFXEffect

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (unsigned long long)hash;
- (id)contentProperties;
- (id)renderEffect;
- (BOOL)enablePresentationState:(BOOL)a0;
- (id)filterContentDataSource;
- (void)setForceRenderAtPosterFrame:(BOOL)a0;

@end
