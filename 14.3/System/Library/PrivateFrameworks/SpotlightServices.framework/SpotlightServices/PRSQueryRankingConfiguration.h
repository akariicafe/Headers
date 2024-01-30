@class NSOrderedSet, NSArray;

@interface PRSQueryRankingConfiguration : NSObject

@property (retain) NSOrderedSet *requiredAttributes;
@property (retain) NSArray *rankingQueries;
@property unsigned long long strongRankingQueryCount;
@property unsigned long long dominantRankingQueryCount;
@property unsigned long long dominatedRankingQueryCount;
@property unsigned long long rankingBitCount;
@property BOOL allowAnonymousDataCollection;
@property unsigned __int128 fuzzyMatchMask;
@property unsigned __int128 fuzzyMatchCheck;

+ (void)updateMailVIP:(id)a0 phoneFavorites:(id)a1 meEmailAddresses:(id)a2;

- (void).cxx_destruct;

@end
