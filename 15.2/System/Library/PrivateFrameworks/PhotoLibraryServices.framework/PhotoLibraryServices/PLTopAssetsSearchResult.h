@class NSArray, PSITopAssetsResult;

@interface PLTopAssetsSearchResult : NSObject

@property (readonly, nonatomic) PSITopAssetsResult *topAssetsResults;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) NSArray *assetUUIDs;

- (id)initWithTopAssetsResult:(id)a0;
- (void).cxx_destruct;

@end
