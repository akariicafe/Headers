@class TLKSectionHeaderView;

@interface SearchUISectionHeaderCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKSectionHeaderView *contentView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (BOOL)fillsBackgroundWithContentForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupContentView;

@end
