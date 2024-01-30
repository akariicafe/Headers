@interface DDSContentItemMatcher : NSObject

+ (BOOL)_anyDictionaryIn:(id)a0 matches:(id)a1 shouldLenientlyMatch:(id /* block */)a2;
+ (BOOL)_anyStringIn:(id)a0 matches:(id)a1 acceptUnspecifiedValue:(BOOL)a2;
+ (BOOL)_dictionary:(id)a0 matches:(id)a1 acceptUnspecifiedAttribute:(BOOL)a2 lenientMatch:(BOOL)a3;
+ (BOOL)_string:(id)a0 matches:(id)a1 acceptUnspecifiedValue:(BOOL)a2;
+ (id)assetContentItemsMatching:(id)a0 contentItems:(id)a1 parentAsset:(id)a2;
+ (BOOL)shouldLenientlyMatchWithContentItemsForRegion:(id)a0;

@end
