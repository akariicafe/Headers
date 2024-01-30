@class NSArray, NSString, NFLRankedLayout, NFLFeedCollectionViewLayoutAttributes;
@protocol NFLFeedTileInfo;

@interface NFLSingleComponentLayout : NSObject <NFLFeedComponentLayout>

@property (retain, nonatomic) NFLRankedLayout *rankedLayout;
@property (copy, nonatomic) id<NFLFeedTileInfo> tileInfo;
@property (readonly, nonatomic) unsigned long long columnSpan;
@property (readonly, nonatomic) NFLFeedCollectionViewLayoutAttributes *layoutAttributes;
@property (readonly, nonatomic) double rank;
@property (readonly, copy, nonatomic) NSArray *tileInfosUsed;
@property (readonly, nonatomic) unsigned long long rowSpan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singleComponentLayoutWithRankedLayout:(id)a0 tileInfo:(id)a1;

@end
