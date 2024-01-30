@class NUIContainerStackView;

@interface SearchUITrailersCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerStackView *contentView;

- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (id)setupContentView;

@end
