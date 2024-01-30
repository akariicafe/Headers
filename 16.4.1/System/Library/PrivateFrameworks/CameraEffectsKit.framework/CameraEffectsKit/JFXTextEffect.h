@class UIColor;

@interface JFXTextEffect : JFXEffect

@property (readonly, nonatomic) UIColor *customTextEditTintColor;
@property (readonly, nonatomic) BOOL textBakedIn;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)strings;
- (void)beginTextEditing;
- (id)contentProperties;
- (id)defaultAttributedString:(unsigned long long)a0;
- (void)endTextEditing;
- (id)customTextEditColor;
- (id)defaultTypingAttributes:(unsigned long long)a0;
- (id)editUIProperties;
- (void)enableDynamicLineSpacingForDiacritics:(BOOL)a0;
- (unsigned long long)indexOfTextObjectUsedForEditViewTransform;
- (BOOL)isAppearanceEqual:(id)a0 forPurpose:(unsigned long long)a1;
- (id)localizedDefaultFontName;
- (id)localizedDefaultText;
- (unsigned long long)maxCharacters;
- (void)setFont:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFontScale:(float)a0 atIndex:(unsigned long long)a1;
- (void)setFontSize:(float)a0 atIndex:(unsigned long long)a1;
- (void)setString:(id)a0 atIndex:(unsigned long long)a1;
- (void)setupLocalizedText;
- (BOOL)textBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 atIndex:(unsigned long long)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 forcePosterFrame:(BOOL)a3 includeDropShadow:(BOOL)a4 includeMasks:(BOOL)a5;
- (id)textBoundsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeDropShadow:(BOOL)a2 includeMasks:(BOOL)a3;
- (struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })textCornersAtIndex:(unsigned long long)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forcePosterFrame:(BOOL)a2 includeDropShadow:(BOOL)a3 scale:(struct CGPoint { double x0; double x1; })a4 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 basisOrigin:(int)a6;
- (id)textEffectContentDataSource;
- (id)textFrameAtIndex:(unsigned long long)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forcePosterFrame:(BOOL)a2 includeDropShadow:(BOOL)a3 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 basisOrigin:(int)a5;
- (id)textFramesAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeDropShadow:(BOOL)a2 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 basisOrigin:(int)a4;
- (long long)textHitTest:(struct CGPoint { double x0; double x1; })a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 basisOrigin:(int)a3;

@end
