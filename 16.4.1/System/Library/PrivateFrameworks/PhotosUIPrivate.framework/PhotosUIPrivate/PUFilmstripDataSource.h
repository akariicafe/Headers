@class AVAsset, NSArray, NSMutableDictionary, NSMapTable;

@interface PUFilmstripDataSource : PUTilingDataSource {
    NSMutableDictionary *_assetByIndexPath;
    NSMapTable *_indexPathByAsset;
}

@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) long long numberOfIndexes;
@property (copy, nonatomic) NSArray *indicatorInfos;

- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)assetAtIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)_normalizedTimeForIndexPath:(id)a0;
- (id)indexPathForAsset:(id)a0;
- (id)initWithAsset:(id)a0 numberOfIndexes:(long long)a1 indicatorInfos:(id)a2;

@end
