@class NSString;

@interface VUIEpisodeShelfViewController : _TVShelfViewController <__TVShelfViewControllerDelegate, VUISeasonPickerButtonDelegate>

@property (nonatomic) BOOL isInitialLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)indexTitlesForCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewDidLoad;
- (void)seasonPickerButtonTapped:(id)a0;
- (void)seasonPickerButtonMenuSelected:(id)a0 selectedTitle:(id)a1 selectedIndex:(unsigned long long)a2;
- (void)_updateEpisodeHeaderWithLeftMostItem;
- (id)_episodeHeaderView;
- (unsigned long long)selectedIndexTitleForItemIndexPath:(id)a0;

@end
