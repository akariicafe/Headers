@interface PGAOINameShortener : NSObject

+ (id)shortenedAOIForAOINode:(id)a0;
+ (id)_shortenedAOIForName:(id)a0;
+ (void)_enumerateWordCombinationsForName:(id)a0 usingBlock:(id /* block */)a1;
+ (BOOL)isCountryWithAOISubstitutions:(id)a0;
+ (id)s_aoiReplacementsDictionary;

@end
