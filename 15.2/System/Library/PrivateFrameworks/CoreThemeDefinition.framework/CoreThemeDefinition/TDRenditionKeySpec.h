@class TDThemeState, TDThemePart, TDThemeGlyphWeight, TDThemeIdiom, TDThemeValue, TDThemeUISizeClass, TDThemeGraphicsFeatureSetClass, TDThemeSize, TDThemeDirection, TDThemeDeploymentTarget, TDAppearance, TDThemeDrawingLayer, TDThemeElement, TDLocalization, TDThemeDisplayGamut, TDThemePresentationState, TDThemeGlyphSize;

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes> {
    unsigned int _dimension1;
    unsigned int _dimension2;
    unsigned int _scaleFactor;
    unsigned int _subtype;
    unsigned int _nameIdentifier;
    unsigned int _memoryClass;
    struct _renditionkeytoken { unsigned short identifier; unsigned short value; } _stackScratchKey[22];
    struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *_scratchKey;
}

@property (retain, nonatomic) TDThemeState *state;
@property (retain, nonatomic) TDThemeState *previousState;
@property (retain, nonatomic) TDThemePresentationState *presentationState;
@property (retain, nonatomic) TDThemeValue *value;
@property (retain, nonatomic) TDThemeValue *previousValue;
@property (retain, nonatomic) TDThemeSize *size;
@property (retain, nonatomic) TDThemeDirection *direction;
@property (retain, nonatomic) TDThemePart *part;
@property (retain, nonatomic) TDThemeElement *element;
@property (retain, nonatomic) TDThemeDrawingLayer *layer;
@property (retain, nonatomic) TDThemeIdiom *idiom;
@property (retain, nonatomic) TDThemeGraphicsFeatureSetClass *graphicsFeatureSetClass;
@property (retain, nonatomic) TDThemeUISizeClass *sizeClassHorizontal;
@property (retain, nonatomic) TDThemeUISizeClass *sizeClassVertical;
@property (retain, nonatomic) TDThemeDisplayGamut *gamut;
@property (retain, nonatomic) TDThemeDeploymentTarget *target;
@property (retain, nonatomic) TDAppearance *appearance;
@property (retain, nonatomic) TDLocalization *localization;
@property (retain, nonatomic) TDThemeGlyphSize *glyphSize;
@property (retain, nonatomic) TDThemeGlyphWeight *glyphWeight;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)setSubtype:(unsigned int)a0;
- (unsigned int)dimension1;
- (unsigned int)memoryClass;
- (unsigned int)subtype;
- (unsigned int)scaleFactor;
- (void)setScaleFactor:(unsigned int)a0;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)key;
- (void)getKey:(struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)keyFormat;
- (void)setDimension1:(unsigned int)a0;
- (void)dealloc;
- (unsigned int)dimension2;
- (id)debugDescription;
- (void)copyAttributesInto:(id)a0;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (void)setDimension2:(unsigned int)a0;
- (id)dataFromAttributes;
- (void)setAttributesFromData:(id)a0;
- (unsigned int)nameIdentifier;
- (void)setNameIdentifier:(unsigned int)a0;
- (void)setMemoryClass:(unsigned int)a0;
- (long long)attributeCount;
- (id)scaleFactorString;
- (void)setScaleFactorString:(id)a0;
- (void)setAttributesFromRenditionKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0 withDocument:(id)a1;
- (id)keyDescription;

@end
