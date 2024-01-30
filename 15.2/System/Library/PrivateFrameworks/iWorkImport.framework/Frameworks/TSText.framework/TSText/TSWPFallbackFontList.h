@class NSDictionary, NSSet;

@interface TSWPFallbackFontList : NSObject

@property (retain, nonatomic) NSDictionary *fallbackFontList;
@property (copy, nonatomic) id /* block */ localizedFontFamilyNameResolver;
@property (readonly, nonatomic) NSSet *replaceableFontNames;
@property (readonly, nonatomic) NSSet *masqueradingFontNames;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)initWithList:(id)a0;
- (BOOL)isMasqueradingFontName:(id)a0;
- (id)fallbackListForPostscriptFontName:(id)a0;
- (id)localizedNameForMasqueradingFontName:(id)a0;
- (id)fallbackFontNameForFontWithName:(id)a0;

@end
