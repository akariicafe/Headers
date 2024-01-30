@class NSString, TLKDescriptionView;

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView <TLKDescriptionViewDelegate>

@property (retain, nonatomic) TLKDescriptionView *contentView;
@property (nonatomic) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (BOOL)supportsCustomUserReportRequestAfforance;
+ (id)dragTitleForCardSection:(id)a0;
+ (id)dragSubtitleForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupContentView;
- (void)didPressMoreButton;
- (void)didPressFootnoteButton;
- (void)didPressTrailingFootnoteButton;

@end
