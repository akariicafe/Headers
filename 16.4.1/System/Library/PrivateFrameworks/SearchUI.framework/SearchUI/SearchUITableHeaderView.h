@class NSString, SearchUILabel;

@interface SearchUITableHeaderView : SearchUITableHeaderViewShared <NUIContainerViewDelegate>

@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *subtitleLabel;
@property (readonly) NSString *title;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)setCardSection:(id)a0;
- (BOOL)isSuggestedAppsHeader;
- (void)updateWithSection:(id)a0 isExpanded:(BOOL)a1 usesInsetRoundedSection:(BOOL)a2;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
