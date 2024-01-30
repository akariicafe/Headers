@class NSArray, PSITopAssetsResult;

@interface PLTopAssetsSearchResult : NSObject

@property (readonly, nonatomic) PSITopAssetsResult *topAssetsResults;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) NSArray *assetUUIDs;

- (void).cxx_destruct;
- (id)initWithTopAssetsResult:(id)a0;

@end
