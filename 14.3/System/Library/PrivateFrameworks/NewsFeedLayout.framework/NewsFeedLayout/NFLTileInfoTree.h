@class NSMutableArray;
@protocol NFLFeedTileInfo;

@interface NFLTileInfoTree : NSObject

@property (nonatomic) struct __CFDictionary { } *values;
@property (retain, nonatomic) id<NFLFeedTileInfo> tileInfo;
@property (nonatomic) long long minimumRowSpan;
@property (nonatomic) long long maximumRowSpan;
@property (retain, nonatomic) NSMutableArray *allRankedLayouts;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)insertRankedLayout:(id)a0;
- (id)rankedLayoutWithRowSpan:(long long)a0 columnSpan:(long long)a1 cellType:(long long)a2;
- (id)description;
- (id)initWithTileInfo:(id)a0;

@end
