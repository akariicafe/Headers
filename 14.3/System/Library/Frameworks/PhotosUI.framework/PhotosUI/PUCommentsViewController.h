@class PUAssetViewModel, PUCommentsTableDataController, NSString, UITableView;
@protocol PUAccessoryContentViewControllerDelegate;

@interface PUCommentsViewController : UIViewController <PUCommentsTableDataControllerDelegate, PUAssetViewModelChangeObserver, PXChangeObserver, PUAccessoryContentViewController>

@property (readonly, nonatomic) UITableView *_tableView;
@property (readonly, nonatomic) PUCommentsTableDataController *_tableDataController;
@property (nonatomic, setter=_setNeedsUpdateTableViewScrollPosition:) BOOL _needsUpdateTableViewScrollPosition;
@property (readonly, nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumContentSize;

+ (BOOL)canShowCommentsForAsset:(id)a0;

- (void)commentsTableDataController:(id)a0 tableViewDidScroll:(id)a1;
- (void)commentsTableDataController:(id)a0 presentViewController:(id)a1;
- (void)commentsTableDataController:(id)a0 didChangeEditing:(BOOL)a1;
- (id)initWithAssetViewModel:(id)a0;
- (void)_updateTableDataController;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBoundsInCoordinateSpace:(id)a0;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 changeReason:(long long)a1;
- (BOOL)contentAreaContainsPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;

@end
