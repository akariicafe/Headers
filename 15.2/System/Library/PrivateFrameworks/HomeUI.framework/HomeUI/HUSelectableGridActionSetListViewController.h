@class HFMutableSetDiff;
@protocol HUSelectableGridActionSetListViewControllerDelegate;

@interface HUSelectableGridActionSetListViewController : HUGridActionSetListViewController

@property (retain, nonatomic) HFMutableSetDiff *mutableSelectedActionSets;
@property (weak, nonatomic) id<HUSelectableGridActionSetListViewControllerDelegate> delegate;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithRoom:(id)a0 selectedActionSets:(id)a1;
- (void)_selectedItemStateChanged:(id)a0 isSelected:(BOOL)a1 accessoryViewCell:(id)a2;
- (void)_updateSelectionState:(BOOL)a0 forCell:(id)a1;
- (void)selectedActionSetStateChanged:(id)a0 isSelected:(BOOL)a1;

@end
