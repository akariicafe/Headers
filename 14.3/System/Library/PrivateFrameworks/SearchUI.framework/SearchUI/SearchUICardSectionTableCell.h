@class SearchUICardSectionView;

@interface SearchUICardSectionTableCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUICardSectionView *sizingContainer;
@property (readonly) SearchUICardSectionView *cardSectionView;

- (void)updateWithRowModel:(id)a0;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (id)leadingView;
- (id)leadingTextView;
- (void)tabKeyPressed;
- (void)setDelegate:(id)a0;

@end
