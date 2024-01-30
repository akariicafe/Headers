@interface JFXFilterEffect : JFXEffect

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)contentProperties;
- (BOOL)enablePresentationState:(BOOL)a0;
- (id)filterContentDataSource;
- (id)renderEffect;
- (void)setForceRenderAtPosterFrame:(BOOL)a0;

@end
