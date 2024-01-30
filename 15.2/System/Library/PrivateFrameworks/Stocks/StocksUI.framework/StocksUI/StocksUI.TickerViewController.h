@interface StocksUI.TickerViewController : UIViewController <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ autoScrolling;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
}

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
