@class CoreThemeDocument;

@interface TDThemeSchema : NSObject {
    CoreThemeDocument *_doc;
}

+ (BOOL)loadThemeConstantsForEntity:(id)a0 inContext:(id)a1;

- (void)dealloc;
- (id)initWithThemeDocument:(id)a0;
- (void)resetThemeConstants;
- (void)sanityCheckAndUpdateDocumentIfNecessary;
- (void)_sanityCheckSchemaPartDefinitionsForStandardElement:(const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)a0 withElement:(id)a1;
- (void)_addSchemaPartDefinitionsForStandardElement:(const struct { char *x0; char *x1; BOOL x2; long long x3; struct { char *x0; char *x1; struct _renditionkeytoken { unsigned short x0; unsigned short x1; } x2[5]; long long x3; long long x4; struct { char *x0; char *x1; long long x2; unsigned long long x3; } x5[12]; } x4[8]; } *)a0 withElement:(id)a1;
- (BOOL)_renditionKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0 isEqualToKeyIgnoringLook:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (void)_sanityCheckObjectsWithEntityName:(id)a0 globalDescriptor:(void *)a1 matchIdentifierOnly:(BOOL)a2;
- (void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
- (void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
- (void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
- (void)_sanityCheckSchemaAssets;
- (void)_sanityCheckColorNamesAndUpdateIfNecessary;
- (void)_sanityCheckEffectRenditionsAndUpdateIfNecessary;
- (void)_sanityCheckMicaRenditionsAndUpdateIfNecessary;
- (void)_loadConstantForEntity:(id)a0 withDescriptor:(const struct _themeconstant { long long x0; char *x1; char *x2; } *)a1;
- (void)loadThemeSizes;
- (void)loadThemeValues;
- (void)loadThemeElements;
- (void)loadThemeParts;
- (void)loadThemeStates;
- (void)loadThemePresentationStates;
- (void)loadThemeDirections;
- (void)loadThemeDrawingLayers;
- (void)loadThemeIdioms;
- (void)loadThemeDisplayGamuts;
- (void)loadThemeDeploymentTargets;
- (void)loadThemeCompressionTypes;
- (void)loadTexturePixelFormats;
- (void)loadThemeTextureFaces;
- (void)loadThemeTextureInterpretations;
- (void)loadThemeGraphicsFeatureSetClasses;
- (void)loadThemeUISizeClasses;
- (void)loadIterationTypes;
- (void)loadRenditionTypes;
- (void)loadRenditionSubtypes;
- (void)loadColorStatuses;
- (void)loadMetafontSelectors;
- (void)loadMetafontSizes;
- (void)loadColorNames;
- (void)loadSchemaCategories;
- (void)loadSchemaDefinitions;
- (void)loadEffectConstants;
- (void)loadTemplateRenderingModeConstants;
- (void)loadGlyphSizeConstants;
- (void)loadGlyphWeightConstants;
- (void)loadBasicThemePart;
- (void)loadStandardEffectDefinitions;

@end
