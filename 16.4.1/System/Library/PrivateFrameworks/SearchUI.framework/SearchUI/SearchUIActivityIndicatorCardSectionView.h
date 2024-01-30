@class TLKActivityIndicatorView;

@interface SearchUIActivityIndicatorCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKActivityIndicatorView *contentView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupContentView;

@end
