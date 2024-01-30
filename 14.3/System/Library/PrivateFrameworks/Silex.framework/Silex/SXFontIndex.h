@class NSString, NSDictionary, NSMutableArray, NSCache;

@interface SXFontIndex : NSObject <SXFontIndex>

@property (readonly, nonatomic) NSDictionary *fonts;
@property (readonly, nonatomic) NSCache *attributeToFontIndex;
@property (readonly, nonatomic) NSCache *fontToAttributeIndex;
@property (readonly, nonatomic) NSMutableArray *fontFamilyProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fontAttributesForFontName:(id)a0;
- (id)initWithFontFamilyProviders:(id)a0;
- (id)fontsForFamilyProviders:(id)a0;
- (void)addFontFamilyProvider:(id)a0;
- (id)fontNameForFontAttributes:(id)a0 size:(long long)a1;

@end
