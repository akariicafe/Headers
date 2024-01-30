@class UIView, NSString, NSArray, UIRefreshControl, NSMutableDictionary, UIDebuggingInformationInspectorDetailViewController, NSMutableArray, UICollectionView;

@interface UIDebuggingInformationHierarchyViewController : UIViewController <UIDebuggingInformationTouchObserver, UICollectionViewDataSource, UIDebuggingInformationHierarchyLayoutDelegate, UICollectionViewDelegate, UIDebuggingInformationHierarchyCellDelegate, UIDebuggingInformationViewController> {
    NSArray *_showingOverlayItems;
    NSArray *_normalItems;
}

@property (retain, nonatomic) NSMutableArray *keys;
@property (retain, nonatomic) NSMutableDictionary *managedValues;
@property (retain, nonatomic) NSMutableDictionary *observersForKeys;
@property (retain, nonatomic) NSMutableDictionary *controlsForKeys;
@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) UIView *rootViewForInspection;
@property (retain, nonatomic) UIRefreshControl *refreshControl;
@property (retain, nonatomic) UIView *highlightedView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct CGColor { } *originalBorderColor;
@property (nonatomic) double originalBorderWidth;
@property (retain, nonatomic) UIDebuggingInformationInspectorDetailViewController *detail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)refresh:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)didReceiveNewView:(id)a0;
- (BOOL)shouldHighlightSelectedCells;
- (void)expandBeneathCell:(id)a0;
- (void)collapseBeneathCell:(id)a0;
- (void)displayDetailsForCell:(id)a0;
- (unsigned long long)indentationLevelForIndexPath:(id)a0;
- (BOOL)shouldCollapseAtIndexPath:(id)a0;
- (id)colorForIndentationLevel:(unsigned long long)a0;
- (void)chooseNewTarget:(id)a0;
- (void)_showWindowChange;
- (id)getViewsRecursiveWithLevel:(unsigned long long)a0 forView:(id)a1;
- (void).cxx_destruct;
- (void)highlightView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
