@class TLKStackView;

@interface SearchUINowPlayingCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKStackView *contentView;

- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (id)setupContentView;

@end
