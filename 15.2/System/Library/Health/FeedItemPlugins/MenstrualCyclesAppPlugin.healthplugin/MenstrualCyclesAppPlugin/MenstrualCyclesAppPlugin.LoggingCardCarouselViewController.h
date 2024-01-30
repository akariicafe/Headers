@class UILabel;

@interface MenstrualCyclesAppPlugin.LoggingCardCarouselViewController : UIViewController <UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ loggingCards;
    void /* unknown type, empty encoding */ userPreferredUnit;
    void /* unknown type, empty encoding */ mutableDaySummary;
    void /* unknown type, empty encoding */ originalDaySummary;
    void /* unknown type, empty encoding */ selectedDatatype;
    void /* unknown type, empty encoding */ collectionViewFlowLayout;
    void /* unknown type, empty encoding */ gregorianCalendar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateLabelBackgroundVibrancyView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardProgressLabelBackgroundVibrancyView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardProgressLabel;
    void /* unknown type, empty encoding */ doneButtonBackgroundVibrancyView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneLabel;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ indexOfCellBeforeDragging;
    void /* unknown type, empty encoding */ contentOffsetXBeforeDragging;
    void /* unknown type, empty encoding */ infiniteScrollingEnabled;
    void /* unknown type, empty encoding */ loggingCardValidationResult;
    void /* unknown type, empty encoding */ loggingCardCarouselViewControllerDelegate;
    void /* unknown type, empty encoding */ temperatureFormatter;
    void /* unknown type, empty encoding */ backgroundBlurView;
    void /* unknown type, empty encoding */ editOrdering;
}

@property (nonatomic, readonly) UILabel *axCardProgressLabel;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)doneTapped:(id)a0;

@end
