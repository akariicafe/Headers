@class NSDictionary, CUIShapeEffectPreset, CUIImage;

@interface CUIThemeSchemaEffectRendition : CUIThemeRendition {
    NSDictionary *_cuiInfo;
    CUIShapeEffectPreset *_effectPreset;
    CUIImage *_referenceImage;
}

- (void)dealloc;
- (id)effectPreset;
- (id)referenceImage;
- (void)_initializeCoreUIOptions:(id)a0;
- (id)initWithCoreUIOptions:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (id)coreUIOptions;
- (BOOL)_generateReferenceImage;
- (id)_rendererInitializationDictionary;

@end
