@class TLKStackView;

@interface SearchUINowPlayingCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKStackView *contentView;

- (id)setupContentView;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;

@end
