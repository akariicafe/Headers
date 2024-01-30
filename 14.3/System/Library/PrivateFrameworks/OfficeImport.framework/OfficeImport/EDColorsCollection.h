@class NSString;

@interface EDColorsCollection : EDCollection <OADColorPalette> {
    unsigned long long mDefaultColorsCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSystemColorId:(unsigned long long)a0;
+ (int)systemColorIdFromIndex:(unsigned long long)a0;
+ (unsigned int)xlColorIndexFromTCSystemColorIDEnum:(int)a0;
+ (int)oadSchemeColorIdFromThemeIndex:(int)a0;

- (void)setupDefaults;
- (id)colorWithIndex:(unsigned long long)a0;
- (unsigned long long)addOrEquivalentColorExcludingDefaults:(id)a0;
- (const unsigned int *)defaultPalette;
- (void)addColors:(const unsigned int *)a0 count:(unsigned int)a1 defaultColors:(const unsigned int *)a2 defaultCount:(unsigned int)a3;
- (unsigned long long)defaultColorsCount;
- (void)addDefaultPalette;
- (id)initWithDefaultSetup:(BOOL)a0;
- (void)addPalette:(const unsigned int *)a0 paletteSize:(unsigned int)a1 paletteX:(const unsigned int *)a2 paletteXSize:(unsigned int)a3;

@end
