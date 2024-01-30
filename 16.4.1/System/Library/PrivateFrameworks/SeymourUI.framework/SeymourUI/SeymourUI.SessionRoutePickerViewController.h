@interface SeymourUI.SessionRoutePickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ collectionBlurView;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ footerView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionViewDataSource;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)onTapBackground;

@end
