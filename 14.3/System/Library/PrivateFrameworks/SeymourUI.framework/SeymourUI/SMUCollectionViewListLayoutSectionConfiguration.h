@interface SMUCollectionViewListLayoutSectionConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) id _smu_underlyingConfiguration;
@property (nonatomic) long long smu_appearanceStyle;
@property (nonatomic) double smu_rowHeight;
@property (nonatomic) double smu_sectionHeaderHeight;
@property (nonatomic) double smu_sectionFooterHeight;
@property (nonatomic) double smu_estimatedRowHeight;
@property (nonatomic) double smu_estimatedSectionHeaderHeight;
@property (nonatomic) double smu_estimatedSectionFooterHeight;
@property (nonatomic) long long smu_separatorStyle;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } smu_separatorInset;
@property (copy, nonatomic) id /* block */ smu_separatorInsetProvider;
@property (copy, nonatomic) id /* block */ smu_leadingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ smu_trailingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ smu_willBeginSwipingHandler;
@property (copy, nonatomic) id /* block */ smu_didEndSwipingHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppearanceStyle:(long long)a0 layoutEnvironment:(id)a1;
- (long long)_underlyingStyleForAppearanceStyle:(long long)a0;
- (long long)_underlyingStyleForSeparatorStyle:(long long)a0;
- (long long)_wrappedStyleForAppearanceStyle:(long long)a0;
- (long long)_wrappedStyleForSeparatorStyle:(long long)a0;

@end
