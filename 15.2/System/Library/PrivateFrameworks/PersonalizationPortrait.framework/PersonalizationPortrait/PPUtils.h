@interface PPUtils : NSObject

+ (id)preferredLanguages;
+ (id)osBuild;
+ (BOOL)isInternalDevice;
+ (long long)compareDouble:(double)a0 withDouble:(double)a1;
+ (void)enumerateChunksOfSize:(unsigned long long)a0 fromArray:(id)a1 usingBlock:(id /* block */)a2;
+ (id)hexOfBytes:(const void *)a0 size:(unsigned long long)a1;
+ (id)coordinatesToGeoHashWithLength:(unsigned long long)a0 latitude:(double)a1 longitude:(double)a2;
+ (id)currentLocaleLanguageCode;
+ (id)sqliteGlobEscape:(id)a0;
+ (double)jaroSimilarityForString:(id)a0 other:(id)a1;
+ (long long)reverseCompareDouble:(double)a0 withDouble:(double)a1;
+ (BOOL)localizedTimeStructForSecondsFrom1970:(double)a0 tm:(struct tm { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; long long x9; char *x10; } *)a1;
+ (id)hexUUID;
+ (BOOL)isFirstPartyApp:(id)a0;
+ (id)reduceSpotlightDomainIdentifiers:(id)a0;
+ (id)Sha256ForData:(id)a0 withSalt:(id)a1;
+ (BOOL)yesWithProbability:(double)a0;
+ (BOOL)localizedTimeStructForDate:(id)a0 tm:(struct tm { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; long long x9; char *x10; } *)a1;
+ (id)formatStringArray:(id)a0 truncatingAtLength:(unsigned long long)a1;

@end
