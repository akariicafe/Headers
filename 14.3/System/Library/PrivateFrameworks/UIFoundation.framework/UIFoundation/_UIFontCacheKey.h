@interface _UIFontCacheKey : NSObject <NSCopying> {
    unsigned long long _hash;
}

+ (id)newFontCacheKeyWithFontName:(id)a0 traits:(int)a1 pointSize:(double)a2;
+ (id)newFontCacheKeyWithFontDescriptor:(id)a0 pointSize:(double)a1 textStyleForScaling:(id)a2 pointSizeForScaling:(double)a3 maximumPointSizeAfterScaling:(double)a4 textLegibility:(BOOL)a5;
+ (id)newFontCacheKeyWithTextStyle:(id)a0 contentSizeCategory:(id)a1 textLegibility:(BOOL)a2;
+ (id)newSystemFontCacheKeyWithTraits:(int)a0 pointSize:(double)a1;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)_precalculateHash;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToKey:(id)a0;

@end
