@class NSString;

@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult

@property (copy, nonatomic) NSString *name;

- (id)initWithName:(id)a0 assetSearchResults:(id)a1 canOverlap:(BOOL)a2;
- (void).cxx_destruct;
- (id)contentStrings;
- (id)matchRanges;
- (BOOL)hasSpecialName;
- (unsigned long long)matchCount;

@end
