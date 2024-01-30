@class NSDictionary, NSSet;

@interface TSWPFallbackFontList : NSObject

@property (retain, nonatomic) NSDictionary *fallbackFontList;
@property (readonly, nonatomic) NSSet *replaceableFontNames;
@property (readonly, nonatomic) NSSet *masqueradingFontNames;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isMasqueradingFontName:(id)a0;
- (id)fallbackListForPostscriptFontName:(id)a0;
- (id)fallbackFontNameForFontWithName:(id)a0;
- (BOOL)shouldShowFallbackBadgeForFont:(id)a0;

@end
