@class NSString, NSMutableDictionary;

@interface TIAssetsForInputModeLevel : NSObject {
    NSMutableDictionary *_assetsByAttributes;
    long long _numberOfAssertions;
}

@property (readonly, nonatomic) NSString *inputModeLevel;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)hasAssertions;
- (id)recursiveDescription;
- (void)gatherStatistics:(id)a0;
- (BOOL)purgeAsset:(id)a0;
- (id)purgeableAssets;
- (void)addAsset:(id)a0;
- (id)assetContentItemsMatching:(id)a0;
- (void)addAssertion;
- (void)removeAssertion;
- (id)initWithInputModeLevel:(id)a0;
- (id)assetVersionsForAttributes:(id)a0;
- (void)removeEmptyAssets;

@end
