@class NSString, TLKSplitHeaderView;

@interface SearchUIScoreSummaryCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate>

@property (retain, nonatomic) TLKSplitHeaderView *splitHeaderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dragTitleForCardSection:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (int)defaultSeparatorStyleForCardSection:(id)a0;
+ (id)titleForScoreBoard:(id)a0 forDisplay:(BOOL)a1;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (id)setupContentView;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;

@end
