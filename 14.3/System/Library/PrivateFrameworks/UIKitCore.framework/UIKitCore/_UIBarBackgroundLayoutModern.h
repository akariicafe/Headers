@class _UIBarBackgroundAppearanceData;

@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout {
    BOOL _backgroundsAreSame;
}

@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData1;
@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData2;

- (id)bg1ShadowTint;
- (double)bg1Alpha;
- (double)bg2ShadowAlpha;
- (id)bg1ShadowColor;
- (double)bg2Alpha;
- (id)bg1ShadowEffect;
- (id)bg2Image;
- (id)bg1Color;
- (BOOL)bg2HasShadow;
- (id)bg1Effects;
- (BOOL)shouldUseExplicitGeometry;
- (id)bg1ShadowImage;
- (id)bg2Color;
- (BOOL)bg2Enabled;
- (id)bg1Image;
- (id)bg2ShadowImage;
- (id)bg2Effects;
- (id)bg2ShadowTint;
- (id)bg2ShadowColor;
- (BOOL)bg1HasShadow;
- (long long)bg2ImageMode;
- (id)bg2ShadowEffect;
- (long long)bg1ImageMode;
- (double)bg1ShadowAlpha;
- (void)describeInto:(id)a0;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;

@end
