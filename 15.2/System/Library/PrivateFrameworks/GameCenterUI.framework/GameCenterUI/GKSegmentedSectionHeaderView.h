@interface GKSegmentedSectionHeaderView : GKSegmentedSelectorView

@property (nonatomic) unsigned long long sectionIndex;

- (void)prepareForReuse;
- (void)setTitles:(id)a0;
- (void)applyLayoutAttributes:(id)a0;

@end
