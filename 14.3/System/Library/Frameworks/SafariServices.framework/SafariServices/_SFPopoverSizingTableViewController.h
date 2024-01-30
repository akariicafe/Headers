@class UITableViewCell, UIBlurEffect;

@interface _SFPopoverSizingTableViewController : UITableViewController {
    UIBlurEffect *_backgroundBlurEffect;
    BOOL _didUpdateTranslucentAppearanceAtLeastOnce;
    BOOL _didHaveTranslucentAppearance;
    BOOL _updatePreferredContentSizeAfterNextLayout;
}

@property (class, readonly, nonatomic) UITableViewCell *tableViewCellForSizeEstimation;

@property (readonly, nonatomic) long long minimumNumberOfRows;
@property (readonly, nonatomic) long long maximumNumberOfRows;
@property (readonly, nonatomic) BOOL hasTranslucentAppearance;

+ (void)initialize;
+ (double)caculateHeightForTableView:(id)a0 targetGlobalRow:(long long)a1 outGlobalRow:(long long *)a2;

- (void)willMoveToParentViewController:(id)a0;
- (id)keyCommands;
- (double)tableViewSpacingForExtraSeparators:(id)a0;
- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)a0;
- (void)_updateTranslucentAppearanceIfNeeded;
- (BOOL)_needsTranslucentAppearanceUpdate;
- (void)updateTranslucentAppearance;
- (id)backgroundColorUsingTranslucentAppearance:(BOOL)a0;
- (void)cancelPopoverKeyPressed;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)updatePreferredContentSize;
- (id)_backgroundBlurEffect;
- (void)traitCollectionDidChange:(id)a0;

@end
