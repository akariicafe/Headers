@interface FCSolConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long maxArticleCombos;
@property (readonly, nonatomic) unsigned long long heuristicSampleSize;
@property (readonly, nonatomic) unsigned long long searchBranchMultiplier;
@property (readonly, nonatomic) double searchBranchDecay;
@property (readonly, nonatomic) double searchTimeLimit;
@property (readonly, nonatomic) double tagSizeCoeff;
@property (readonly, nonatomic) double tagFavoritedCoeff;
@property (readonly, nonatomic) double tagAutoFavoritedCoeff;
@property (readonly, nonatomic) double tagGroupableCoeff;
@property (readonly, nonatomic) double tagArticleScoreCoeff;
@property (readonly, nonatomic) double tagPersonalizationCoeff;
@property (readonly, nonatomic) double tagSpecificityCoeff;
@property (readonly, nonatomic) double optionalTagSpecificityScore;
@property (readonly, nonatomic) long long heuristicOption;

+ (id)configurationWithTreatment:(id)a0 deviceIsiPad:(BOOL)a1;

- (id)initWithHeuristicSampleSize:(unsigned long long)a0 searchBranchMultiplier:(unsigned long long)a1 searchBranchDecay:(double)a2 searchTimeLimit:(double)a3 tagSizeCoeff:(double)a4 tagFavoritedCoeff:(double)a5 tagAutoFavoritedCoeff:(double)a6 tagGroupableCoeff:(double)a7 tagArticleScoreCoeff:(double)a8 tagPersonalizationCoeff:(double)a9 tagSpecificityCoeff:(double)a10 optionalTagSpecificityScore:(double)a11 heuristicOption:(long long)a12;

@end
