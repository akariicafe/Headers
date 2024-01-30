@class SearchUICombinedCardSectionsView;

@interface SearchUICombinedCollectionViewCell : SearchUICollectionViewCell

@property (retain) SearchUICombinedCardSectionsView *cardSectionView;

- (void)updateWithRowModel:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)sizingView;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;

@end
