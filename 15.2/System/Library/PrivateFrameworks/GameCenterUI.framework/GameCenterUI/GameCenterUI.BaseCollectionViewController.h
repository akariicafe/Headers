@class UICollectionView;

@interface GameCenterUI.BaseCollectionViewController : UICollectionViewController <ASCLockupViewDelegate, UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ wantsHiddenNavigationBar;
    void /* unknown type, empty encoding */ wantsHiddenTitle;
    void /* unknown type, empty encoding */ manualScrollEdgeAppearanceProgress;
    void /* unknown type, empty encoding */ scrollObserver;
    void /* unknown type, empty encoding */ navbarScrollObserver;
}

@property (nonatomic, retain) UICollectionView *collectionView;

- (id)presentingViewControllerForLockupView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)loadView;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
