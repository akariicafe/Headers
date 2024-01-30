@class NSOrderedSet, NSArray;

@interface PRSQueryRankingConfiguration : NSObject

@property (retain, nonatomic) NSOrderedSet *requiredAttributes;
@property (retain, nonatomic) NSArray *rankingQueries;
@property (nonatomic) unsigned long long strongRankingQueryCount;
@property (nonatomic) unsigned long long dominantRankingQueryCount;
@property (nonatomic) unsigned long long dominatedRankingQueryCount;
@property (nonatomic) unsigned long long shortcutBit;
@property (nonatomic) unsigned long long highMatchBit;
@property (nonatomic) unsigned long long lowMatchBit;
@property (nonatomic) unsigned long long highRecencyBit;
@property (nonatomic) unsigned long long lowRecencyBit;
@property (nonatomic) unsigned long long rankingBitCount;
@property (nonatomic) BOOL allowAnonymousDataCollection;
@property (nonatomic) unsigned __int128 fuzzyMatchMask;
@property (nonatomic) unsigned __int128 fuzzyMatchCheck;
@property (nonatomic) double minL2Score;
@property (nonatomic) double maxAge;
@property (nonatomic) double minCount;

+ (void)updateMailVIP:(id)a0 phoneFavorites:(id)a1 meEmailAddresses:(id)a2;

- (void).cxx_destruct;

@end
