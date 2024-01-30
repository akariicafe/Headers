@interface _UIFontCacheKey : NSObject <NSCopying> {
    unsigned long long _hash;
}

+ (id)newFontCacheKeyWithFontName:(id)a0 traits:(int)a1 pointSize:(double)a2;
+ (id)newSystemFontCacheKeyWithDesign:(id)a0 weight:(double)a1 pointSize:(double)a2 monospacedDigits:(BOOL)a3;
+ (id)newFontCacheKeyWithTextStyle:(id)a0 contentSizeCategory:(id)a1 textLegibility:(BOOL)a2;
+ (id)newFontCacheKeyWithFontDescriptor:(id)a0 pointSize:(double)a1 textStyleForScaling:(id)a2 pointSizeForScaling:(double)a3 maximumPointSizeAfterScaling:(double)a4 textLegibility:(BOOL)a5;
+ (id)newSystemFontCacheKeyWithTraits:(int)a0 pointSize:(double)a1;

- (unsigned long long)_hash;
- (void)_precalculateHash;
- (BOOL)_isEqualToKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
