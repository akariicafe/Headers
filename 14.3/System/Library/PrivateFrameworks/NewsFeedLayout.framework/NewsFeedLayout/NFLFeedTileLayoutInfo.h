@class NFLFeedCollectionViewLayoutAttributes, NSObject;
@protocol NFLFeedTileInfo;

@interface NFLFeedTileLayoutInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSObject<NFLFeedTileInfo> *tileInfo;
@property (copy, nonatomic) NFLFeedCollectionViewLayoutAttributes *layoutAttributes;

+ (id)nfl_layoutInfoWithTileInfo:(id)a0 forLayoutAttributes:(id)a1 atRowOrigin:(long long)a2 columnOrigin:(long long)a3 subBatchRowOffset:(long long)a4 feedSettings:(id)a5;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTileInfo:(id)a0 layoutAttributes:(id)a1;

@end
