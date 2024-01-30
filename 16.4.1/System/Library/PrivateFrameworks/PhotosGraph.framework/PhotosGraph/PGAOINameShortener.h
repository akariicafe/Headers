@interface PGAOINameShortener : NSObject

+ (void)_enumerateWordCombinationsForName:(id)a0 usingBlock:(id /* block */)a1;
+ (id)_shortenedAOIForName:(id)a0;
+ (BOOL)isCountryWithAOISubstitutions:(id)a0;
+ (id)s_aoiReplacementsDictionary;
+ (id)shortenedAOIForAOINode:(id)a0 locationHelper:(id)a1;

@end
