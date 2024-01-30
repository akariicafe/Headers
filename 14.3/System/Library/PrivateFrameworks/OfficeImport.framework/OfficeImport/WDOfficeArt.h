@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {
    OADDrawable *mDrawable;
    BOOL mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)a0;

- (void)setFloating:(BOOL)a0;
- (id)imageData;
- (BOOL)isFloating;
- (void).cxx_destruct;
- (id)imageName;
- (id)description;
- (id)drawable;
- (int)runType;
- (id)initWithParagraph:(id)a0;
- (BOOL)isDrawableOverridden;
- (void)checkForFloating:(id)a0;
- (void)setDrawable:(id)a0;
- (void)setTextType:(int)a0 recursivelyToDrawable:(id)a1;
- (id)overrideDrawable;
- (void)clearDrawable;
- (id)imageBlipRef;
- (void)setImageBlipRef:(id)a0;
- (void)propagateTextTypeToDrawables;

@end
