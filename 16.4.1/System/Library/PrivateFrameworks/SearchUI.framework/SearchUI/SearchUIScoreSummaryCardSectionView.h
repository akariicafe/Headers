@class NSString, TLKSplitHeaderView;

@interface SearchUIScoreSummaryCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, TLKSplitHeaderViewDelegate>

@property (retain, nonatomic) TLKSplitHeaderView *splitHeaderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)defaultSeparatorStyleForCardSection:(id)a0;
+ (id)dragTitleForCardSection:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (id)titleForScoreBoard:(id)a0 forDisplay:(BOOL)a1;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)didPressLeadingButtonForSplitHeader:(id)a0;
- (void)didPressTrailingButtonForSplitHeader:(id)a0;
- (id)setupContentView;
- (id)commandForButtonItem:(id)a0;
- (BOOL)hasCommandForButtonItem:(id)a0;
- (void)performCommandForButtonItem:(id)a0;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;

@end
