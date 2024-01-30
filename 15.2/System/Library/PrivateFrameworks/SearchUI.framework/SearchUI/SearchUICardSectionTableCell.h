@class SearchUICardSectionView;

@interface SearchUICardSectionTableCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUICardSectionView *sizingContainer;
@property (readonly) SearchUICardSectionView *cardSectionView;

- (void)setDelegate:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (id)leadingView;
- (id)leadingTextView;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)tabKeyPressed;

@end
