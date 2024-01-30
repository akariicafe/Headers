@class SearchUIHorizontallyScrollingContainerView;

@interface SearchUIHorizontallyScrollableCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) SearchUIHorizontallyScrollingContainerView *contentView;

- (void)setFeedbackDelegate:(id)a0;
- (id)setupContentView;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;

@end
