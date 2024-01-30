@class _UIBarBackgroundAppearanceData;

@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout {
    BOOL _backgroundsAreSame;
}

@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData1;
@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData2;

- (id)bg2Color;
- (id)bg1ShadowTint;
- (id)bg1Color;
- (id)bg2ShadowImage;
- (double)bg1Alpha;
- (double)bg2Alpha;
- (long long)bg1ImageMode;
- (id)bg2Effects;
- (long long)bg2ImageMode;
- (id)bg2ShadowEffect;
- (BOOL)bg1HasShadow;
- (id)bg1Effects;
- (double)bg1ShadowAlpha;
- (BOOL)bg2HasShadow;
- (BOOL)shouldUseExplicitGeometry;
- (id)bg2ShadowTint;
- (id)bg1ShadowColor;
- (id)bg2Image;
- (id)bg1Image;
- (id)bg1ShadowEffect;
- (BOOL)bg2Enabled;
- (double)bg2ShadowAlpha;
- (id)bg1ShadowImage;
- (id)initWithLayout:(id)a0;
- (id)bg2ShadowColor;
- (void)describeInto:(id)a0;
- (void).cxx_destruct;

@end
