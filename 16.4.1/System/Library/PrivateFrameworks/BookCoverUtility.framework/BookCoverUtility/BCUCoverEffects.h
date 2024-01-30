@class BCULayerRenderer, NSArray;

@interface BCUCoverEffects : NSObject {
    BCULayerRenderer *_renderer;
    NSArray *_bookFilters;
    NSArray *_seriesFilters;
    NSArray *_templateImageFilters;
}

+ (id)_effectIdentifierForEffectIndex:(unsigned long long)a0;
+ (id)effectIdentifierForAsset:(id)a0 withEnvironment:(id)a1;
+ (id)effectIdentifierForFilterInfo:(id)a0;
+ (id)effectIdentifierWithRTL:(BOOL)a0 style:(unsigned long long)a1 content:(unsigned long long)a2 nightMode:(BOOL)a3;
+ (struct CGImage { } *)restrictedImageFrom:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (id)initWithRenderer:(id)a0;
- (id)bookCoverEffectFilterForEffectIdentifier:(id)a0;
- (id)bookCoverEffectFilters;
- (id)initWithRenderer:(id)a0 mode:(unsigned long long)a1;
- (id)seriesCoverEffectFilters;
- (id)templateImageFilters;

@end
