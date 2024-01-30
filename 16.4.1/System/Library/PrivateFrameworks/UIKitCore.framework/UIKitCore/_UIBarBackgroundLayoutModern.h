@class _UIBarBackgroundAppearanceData;

@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout {
    BOOL _backgroundsAreSame;
}

@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData1;
@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData2;

- (id)bg1Effects;
- (id)bg2ShadowTint;
- (id)bg1Color;
- (double)bg2ShadowAlpha;
- (double)bg2Alpha;
- (BOOL)shouldUseExplicitGeometry;
- (long long)bg2ImageMode;
- (id)bg1ShadowColor;
- (double)bg1Alpha;
- (id)initWithLayout:(id)a0;
- (id)bg2ShadowEffect;
- (id)bg1ShadowTint;
- (id)bg1Image;
- (BOOL)bg1HasShadow;
- (id)bg1ShadowEffect;
- (long long)bg1ImageMode;
- (id)bg2Image;
- (double)bg1ShadowAlpha;
- (id)bg2Effects;
- (id)bg1ShadowImage;
- (id)bg2ShadowColor;
- (id)bg2Color;
- (BOOL)bg2HasShadow;
- (BOOL)bg2Enabled;
- (void)describeInto:(id)a0;
- (id)bg2ShadowImage;
- (void).cxx_destruct;

@end
