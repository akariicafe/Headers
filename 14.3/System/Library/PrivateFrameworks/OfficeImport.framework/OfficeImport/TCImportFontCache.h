@class NSMutableDictionary, OITSUNoCopyDictionary;

@interface TCImportFontCache : NSObject {
    OITSUNoCopyDictionary *mFontCache;
}

@property (readonly, nonatomic) NSMutableDictionary *fontNameCache;

+ (struct CGSize { double x0; double x1; })stringSizeForText:(id)a0 ctFontRef:(struct __CTFont { } *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (struct __CTFont { } *)ctFontRefForKey:(id)a0;
- (struct __CTFont { } *)fontRefForFontName:(id)a0 size:(int)a1;
- (struct CGSize { double x0; double x1; })stringSizeForSpaceWithFontName:(id)a0 fontSize:(int)a1;
- (struct CGSize { double x0; double x1; })stringSizeForText:(id)a0 fontName:(id)a1 fontSize:(int)a2;

@end
