@class NFLFeedSettings, NFLCellGenerator;

@interface NFLCellGeneratorManager : NSObject

@property (retain, nonatomic) NFLCellGenerator *noImageCellGenerator;
@property (retain, nonatomic) NFLCellGenerator *imageOnSideCellGenerator;
@property (retain, nonatomic) NFLCellGenerator *imageOnSideAccessibilityCellGenerator;
@property (retain, nonatomic) NFLCellGenerator *imageOnTopCellGenerator;
@property (retain, nonatomic) NFLCellGenerator *premiumCellGenerator;
@property (retain, nonatomic) NFLCellGenerator *spotlightImageOnTopCellGenerator;
@property (retain, nonatomic) NFLCellGenerator *spotlightImageOnSideCellGenerator;
@property (retain, nonatomic) NFLCellGenerator *trendingCellGenerator;
@property (retain, nonatomic) NFLCellGenerator *gapCellGenerator;
@property (weak, nonatomic) NFLFeedSettings *feedSettings;

+ (id)cellGeneratorWithFeedSettings:(id)a0;

- (id)cellGeneratorsForCellType:(long long)a0;
- (void).cxx_destruct;
- (id)cellGeneratorForCellType:(long long)a0;

@end
