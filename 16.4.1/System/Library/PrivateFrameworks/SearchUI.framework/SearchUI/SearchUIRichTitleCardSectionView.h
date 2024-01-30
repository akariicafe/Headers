@class TLKHeaderView;

@interface SearchUIRichTitleCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKHeaderView *contentView;

+ (int)defaultSeparatorStyleForCardSection:(id)a0;
+ (id)dragSubtitleForCardSection:(id)a0;
+ (id)dragTitleForCardSection:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (id)setupContentView;

@end
