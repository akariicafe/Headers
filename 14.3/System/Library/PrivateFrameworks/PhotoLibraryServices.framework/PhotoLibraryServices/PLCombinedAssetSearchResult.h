@class NSArray, NSMutableArray;

@interface PLCombinedAssetSearchResult : PLAssetSearchResult {
    unsigned long long _assetCount;
    NSArray *_assetUUIDs;
}

@property (retain, nonatomic) NSMutableArray *assetSearchResults;
@property (nonatomic) BOOL resultsCanOverlap;
@property (readonly, nonatomic) NSArray *groupResults;

- (void).cxx_destruct;
- (id)assetUUIDs;
- (unsigned long long)categoryMask;
- (id)initWithAssetSearchResults:(id)a0 canOverlap:(BOOL)a1;
- (id)initWithAssetSearchResult:(id)a0;
- (void)addAssetSearchResult:(id)a0 isMainSearchResult:(BOOL)a1;
- (id)groupDescription;
- (unsigned long long)assetCount;

@end
