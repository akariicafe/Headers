@class SearchUICardSectionView;

@interface SearchUICardSectionTableCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUICardSectionView *sizingContainer;
@property (readonly) SearchUICardSectionView *cardSectionView;

- (void)updateWithRowModel:(id)a0;
- (id)leadingView;
- (void)setDelegate:(id)a0;
- (id)leadingTextView;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)tabKeyPressed;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;

@end
