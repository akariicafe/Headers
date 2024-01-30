@class SearchUIWatchListUtilities;

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView

@property (retain, nonatomic) SearchUIWatchListUtilities *watchListUtility;

- (void).cxx_destruct;
- (id)initIsInUpNext:(BOOL)a0 cardSectionView:(id)a1;
- (void)updateUpNextStatus;
- (void)buttonPressed;

@end
