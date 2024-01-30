@class SearchUICombinedCardSectionsView;

@interface SearchUICombinedCollectionViewCell : SearchUICollectionViewCell

@property (retain) SearchUICombinedCardSectionsView *cardSectionView;

- (void)setDelegate:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (id)sizingView;

@end
