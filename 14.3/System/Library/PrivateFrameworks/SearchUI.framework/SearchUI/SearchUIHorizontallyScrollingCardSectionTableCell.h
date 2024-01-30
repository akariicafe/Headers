@class SearchUIHorizontallyScrollingContainerView;

@interface SearchUIHorizontallyScrollingCardSectionTableCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUIHorizontallyScrollingContainerView *sizingContainer;

- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)setDelegate:(id)a0;

@end
