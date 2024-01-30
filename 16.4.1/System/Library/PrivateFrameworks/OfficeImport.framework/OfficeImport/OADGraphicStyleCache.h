@class OADGraphicFeatureCache, NSMutableDictionary;

@interface OADGraphicStyleCache : NSObject {
    OADGraphicFeatureCache *mFillCacheArray[4];
    OADGraphicFeatureCache *mStrokeCache;
    OADGraphicFeatureCache *mShadowCache;
    OADGraphicFeatureCache *mColorCache;
    OADGraphicFeatureCache *mFontFaceCache;
    OADGraphicFeatureCache *mTextStyleCache;
    OADGraphicFeatureCache *mTableIdCache;
    NSMutableDictionary *mTableStyleCache;
    OADGraphicFeatureCache *mChartIdCache;
    OADGraphicFeatureCache *mDrawableStyleCacheArray[4];
}

+ (int)fillCatagory:(id)a0;

- (void)dealloc;
- (id)shadows;
- (id)init;
- (void).cxx_destruct;
- (id)strokes;
- (id)colorCache;
- (id)cachedDrawableStylesOfCategory:(int)a0;
- (void)applyCachedDrawableStyle:(id)a0 toGraphicProperties:(id)a1;
- (void)applyCachedDrawableStyle:(id)a0 toParagraphProperties:(id)a1;
- (void)applyCachedDrawableStyle:(id)a0 toTextBodyProperties:(id)a1;
- (void)cacheChartStyleId:(int)a0;
- (unsigned long long)cacheDrawablePropertiesOfCategory:(int)a0 withFillCategory:(int)a1 fillIndex:(unsigned long long)a2 strokeIndex:(unsigned long long)a3 shadowIndex:(unsigned long long)a4 reflectionOpacity:(float)a5 textStyleIndex:(unsigned long long)a6;
- (unsigned long long)cacheDrawablePropertiesOfCategory:(int)a0 withGraphicProperties:(id)a1 textBodyProperties:(id)a2 paragraphProperties:(id)a3 characterProperties:(id)a4 colorContext:(id)a5;
- (unsigned long long)cacheFill:(id)a0 returnCategory:(int *)a1;
- (unsigned long long)cacheShadow:(id)a0;
- (unsigned long long)cacheStroke:(id)a0;
- (void)cacheTableStyle:(id)a0;
- (id)chartStyleIds;
- (id)countedDrawableStyleOfCategory:(int)a0 atIndex:(unsigned long long)a1;
- (id)fillsOfCategory:(int)a0;
- (id)fontFaceCache;
- (id)tableStyleForId:(id)a0;
- (id)tableStyleIds;

@end
