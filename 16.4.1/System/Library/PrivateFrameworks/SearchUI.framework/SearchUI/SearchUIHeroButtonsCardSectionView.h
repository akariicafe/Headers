@class NUIContainerStackView, NSArray, SFButtonListCardSection;

@interface SearchUIHeroButtonsCardSectionView : SearchUICardSectionView

@property (readonly, nonatomic) SFButtonListCardSection *section;
@property (readonly) NUIContainerStackView *contentView;
@property (retain, nonatomic) NSArray *buttonViews;
@property (retain, nonatomic) NSArray *autoShortcuts;
@property (retain, nonatomic) NSArray *synthesizedButtonItems;

+ (unsigned long long)maxButtonItems;
+ (id)shortcutsForBundleId:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (id)setupContentView;
- (id)showMoreButtonItem;

@end
