@class NSString;

@interface EDColorsCollection : EDCollection <OADColorPalette> {
    unsigned long long mDefaultColorsCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)oadSchemeColorIdFromThemeIndex:(int)a0;
+ (BOOL)isSystemColorId:(unsigned long long)a0;
+ (int)systemColorIdFromIndex:(unsigned long long)a0;
+ (unsigned int)xlColorIndexFromTCSystemColorIDEnum:(int)a0;

- (void)setupDefaults;
- (id)colorWithIndex:(unsigned long long)a0;
- (void)addColors:(const unsigned int *)a0 count:(unsigned int)a1 defaultColors:(const unsigned int *)a2 defaultCount:(unsigned int)a3;
- (void)addDefaultPalette;
- (unsigned long long)addOrEquivalentColorExcludingDefaults:(id)a0;
- (void)addPalette:(const unsigned int *)a0 paletteSize:(unsigned int)a1 paletteX:(const unsigned int *)a2 paletteXSize:(unsigned int)a3;
- (unsigned long long)defaultColorsCount;
- (const unsigned int *)defaultPalette;
- (id)initWithDefaultSetup:(BOOL)a0;

@end
