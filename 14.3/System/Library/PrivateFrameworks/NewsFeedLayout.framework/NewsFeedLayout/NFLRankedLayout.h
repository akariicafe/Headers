@class NFLFeedCollectionViewLayoutAttributes, NSMutableDictionary;

@interface NFLRankedLayout : NSObject <NSCopying>

@property (retain, nonatomic) NFLFeedCollectionViewLayoutAttributes *layoutAttributes;
@property (nonatomic) double rank;
@property (nonatomic) BOOL vetoed;
@property (copy, nonatomic) NSMutableDictionary *ranks;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
