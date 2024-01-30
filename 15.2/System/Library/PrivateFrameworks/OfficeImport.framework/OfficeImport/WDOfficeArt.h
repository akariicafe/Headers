@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {
    OADDrawable *mDrawable;
    BOOL mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)a0;

- (id)imageData;
- (id)description;
- (void)setFloating:(BOOL)a0;
- (BOOL)isFloating;
- (id)imageName;
- (void).cxx_destruct;
- (id)drawable;
- (int)runType;
- (void)setDrawable:(id)a0;
- (id)initWithParagraph:(id)a0;
- (void)checkForFloating:(id)a0;
- (BOOL)isDrawableOverridden;
- (void)setTextType:(int)a0 recursivelyToDrawable:(id)a1;
- (id)overrideDrawable;
- (void)clearDrawable;
- (id)imageBlipRef;
- (void)setImageBlipRef:(id)a0;
- (void)propagateTextTypeToDrawables;

@end
