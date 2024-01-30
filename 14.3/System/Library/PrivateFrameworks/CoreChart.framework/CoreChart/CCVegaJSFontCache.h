@class NSMutableDictionary;

@interface CCVegaJSFontCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_styleCache;
    NSMutableDictionary *_internalNameCache;
}

+ (void)cleanUp;
+ (id)sharedCache;
+ (struct __CTFont { } *)cacheedFontForInternalName:(id)a0;
+ (void)cacheFont:(struct __CTFont { } *)a0 forInternalName:(id)a1;
+ (id)fontMetricsForTextStyle:(id)a0 options:(id)a1;
+ (id)fontWithCSSFontString:(id)a0 options:(id)a1;
+ (id)fontWithFontFamily:(id)a0 fontSize:(double)a1 fontWeight:(id)a2 fontStyle:(id)a3 fontVariant:(id)a4 options:(id)a5;

- (id)init;
- (void).cxx_destruct;

@end
