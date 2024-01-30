@class NSArray;

@interface CUIDesignLibraryCompositeCatalog : NSObject {
    NSArray *_catalogs;
}

+ (id)compositeCatalogForDesignSystem:(long long)a0 colorScheme:(long long)a1 contrast:(long long)a2 styling:(long long)a3 error:(id *)a4;
+ (id)_catalogsForDesignSystem:(long long)a0 colorScheme:(long long)a1 contrast:(long long)a2 styling:(long long)a3 error:(id *)a4;

- (id)colorWithName:(long long)a0 palette:(long long)a1 displayGamut:(long long)a2 error:(id *)a3;
- (void)dealloc;
- (id)initWithCatalogs:(id)a0;
- (id)shapeEffectPresetWithName:(id)a0 error:(id *)a1;

@end
