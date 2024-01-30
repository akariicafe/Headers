@interface SDSodiumFeature : NSObject

+ (BOOL)usingSodiumRankingForClientBundle:(id)a0;
+ (BOOL)isPhotosBundle:(id)a0;
+ (id)allBundleIDsUsingSodiumRanking;
+ (BOOL)pureSodiumL2RankingAllowedWithBundle:(id)a0 clientBundle:(id)a1;

@end
