@class NSString, NSMutableDictionary, TSSStylesheet;

@interface TSSTheme : TSPObject <TSKModel> {
    NSString *mThemeIdentifier;
    NSMutableDictionary *mPresetsByKind;
}

@property (readonly, nonatomic) TSSStylesheet *stylesheet;
@property (nonatomic) BOOL isLocked;
@property (retain, nonatomic) NSString *themeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presetBootstrapOrder;
+ (id)presetSources;
+ (void)registerPresetSourceClass:(Class)a0;
+ (void)registerPresetSourceClasses;
+ (id)themeWithContext:(id)a0 alternate:(int)a1;

- (id)colors;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithContext:(id)a0;
- (id)childEnumerator;
- (id)modelPathComponentForChild:(id)a0;
- (void)checkThemeStylesheetConsistency;
- (void)addPreset:(id)a0 ofKind:(id)a1;
- (void)bootstrapThemeAlternate:(int)a0;
- (BOOL)containsCGColor:(struct CGColor { } *)a0;
- (void)disablePresetValidation;
- (void)enablePresetValidation;
- (BOOL)hasPresetsOfKind:(id)a0;
- (unsigned long long)indexOfPreset:(id)a0;
- (void)insertPreset:(id)a0 ofKind:(id)a1 atIndex:(unsigned long long)a2;
- (void)movePresetOfKind:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (id)p_identifierForBootstrapTheme:(int)a0;
- (id)presetOfKind:(id)a0 index:(unsigned long long)a1;
- (id)presetsOfKind:(id)a0;
- (void)removePreset:(id)a0;
- (void)setPresets:(id)a0 ofKind:(id)a1;

@end
