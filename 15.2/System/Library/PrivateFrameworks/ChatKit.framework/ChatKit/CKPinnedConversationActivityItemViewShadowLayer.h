@interface CKPinnedConversationActivityItemViewShadowLayer : CAShapeLayer

@property (readonly, nonatomic) long long shadowType;
@property (nonatomic) long long userInterfaceStyle;

- (void)_updateShadowProperties;
- (double)_opacityForShadowStyle:(long long)a0;
- (long long)_shadowStyleForShadowType:(long long)a0 userInterfaceStyle:(long long)a1;
- (double)_radiusForShadowStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })_offsetForShadowStyle:(long long)a0;
- (id)initWithShadowType:(long long)a0;

@end
