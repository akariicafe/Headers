@class NSString, NSDictionary, TSUImage, NSMutableArray;

@interface TSCHFillSet : NSObject {
    NSDictionary *mPListProperties;
    TSUImage *mSwatchImage;
    NSMutableArray *mSeriesSwatchImages;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *mSeriesSwatchImageRects;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *plistPath;
@property (readonly, nonatomic) NSString *lookupString;

+ (struct CGSize { double x0; double x1; })defaultSwatchSize;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)countOfDefinedSeriesForSeriesType:(id)a0;
- (id)fillForSeriesIndex:(unsigned long long)a0 seriesType:(id)a1 context:(id)a2;
- (id)p_sagePropertiesForSeriesType:(id)a0;
- (id)p_sagePropertiesForSeriesIndex:(unsigned long long)a0 seriesType:(id)a1;
- (id)p_tangierToSageProperties;
- (id)plistProperties;
- (id)p_propertyMapsToApplyToChart:(id)a0 context:(id)a1;
- (id)swatchFills;
- (id)fillsForSeriesType:(id)a0 context:(id)a1;
- (id)fillsForDefaultSeriesType;
- (void)p_createSeriesSwatchImagesWithSeriesCount:(unsigned long long)a0 swatchSize:(struct CGSize { double x0; double x1; })a1;
- (id)swatchImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)fillForPreviewForSeriesIndex:(unsigned long long)a0 seriesType:(id)a1;
- (id)initWithIdentifier:(id)a0 plistPath:(id)a1;
- (id)fillFromSageProperties:(id)a0;
- (id)colorFromProperties:(id)a0;
- (BOOL)chartAlreadyMatches:(id)a0;
- (id)commandToApplyToChart:(id)a0 context:(id)a1;
- (id)styleSwapCommandToApplyToChart:(id)a0 context:(id)a1;
- (id)seriesSwatchImageWithSwatchSize:(struct CGSize { double x0; double x1; })a0 seriesIndex:(unsigned long long)a1;
- (void)primeSwatchImageCache;
- (id)propertyMutationTuplesForPreviewOnChart:(id)a0;
- (id)seriesStylesForSeriesTypes:(id)a0 context:(id)a1;

@end
