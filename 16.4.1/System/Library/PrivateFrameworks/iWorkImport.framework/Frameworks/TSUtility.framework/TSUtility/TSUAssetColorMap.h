@class NSDictionary, NSMutableDictionary;

@interface TSUAssetColorMap : NSObject {
    NSMutableDictionary *mAssetPathToColorMap;
}

@property (readonly, copy, nonatomic) NSDictionary *assetPathToColorMap;

+ (id)assetColorMap;

- (id)init;
- (void).cxx_destruct;
- (void)addChartEntries;
- (id)TSUColorFromColorArray:(id)a0;
- (void)addEntriesFromPlistBasename:(id)a0 transformKeyBlock:(id /* block */)a1;
- (void)addSharedEntries;

@end
