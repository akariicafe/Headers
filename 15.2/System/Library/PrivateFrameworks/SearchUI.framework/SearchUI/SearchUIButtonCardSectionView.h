@class TLKButtonView;

@interface SearchUIButtonCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKButtonView *contentView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupContentView;

@end
