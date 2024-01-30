@interface HKAvailableRegions : NSObject

+ (id)_decodePlistDictionary:(id)a0;
+ (id)_decodeToRegionCodesWithPlistDictionary:(id)a0;
+ (id)regionsWithPlistAtURL:(id)a0 error:(id *)a1;
+ (id)regionCodesWithPlistAtURL:(id)a0 error:(id *)a1;

@end
