@class UINavigationController, PTSettings, PXSettings;

@interface _PUSettingsController : PTUISettingsController

@property (readonly, nonatomic) UINavigationController *searchNavigationController;
@property (readonly, nonatomic) UINavigationController *configurationsNavigationController;
@property (nonatomic) BOOL hasWarnedForOverrides;
@property (readonly, nonatomic) PTSettings *rootSettings;
@property (readonly, nonatomic) PXSettings *currentSettings;
@property (copy, nonatomic) id /* block */ onViewDidDisappearBlock;
@property (copy, nonatomic) id /* block */ dismissButtonFactory;
@property (copy, nonatomic) id /* block */ ellipsisBarButtonItemFactory;

- (void).cxx_destruct;
- (void)callOnViewDidDisappearBlock;
- (void)handleEllipsisBarButtonItem:(id)a0;
- (id)initWithRootSettings:(id)a0;
- (void)_invalidateNavigationItems;
- (void)_updateNavigationItemOfViewController:(id)a0;
- (void)_warnForSettingsOverride;
- (void)_clearSettingsOverride;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;

@end
