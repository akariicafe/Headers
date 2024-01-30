@class SearchUICardSectionView, NUIContainerBoxView;

@interface SearchUICardSectionCollectionViewCell : SearchUICollectionViewCell

@property (retain) SearchUICardSectionView *cardSectionView;
@property (retain) NUIContainerBoxView *boxView;

- (void)setDelegate:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)leadingView;
- (id)embeddedViewController;
- (id)leadingTextView;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (id)sizingView;
- (void)updateRoundedCornersForView:(id)a0 cornerMask:(unsigned long long)a1;

@end
