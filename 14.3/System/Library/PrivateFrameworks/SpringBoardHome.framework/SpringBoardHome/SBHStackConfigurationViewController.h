@class UITableView, CHSAvocadoDescriptorProvider, SBHWidgetConfigurationInteraction, NSString, SBIconView, UIButton, SBHStackConfiguration;
@protocol SBHStackConfigurationViewControllerAppearanceDelegate, SBHWidgetSheetViewControllerPresenter, SBHStackConfigurationViewControllerDelegate;

@interface SBHStackConfigurationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SBHIconViewConfigurationInteractionDelegate, SBHWidgetSheetViewControlling> {
    UITableView *_tableView;
    UIButton *_closeButton;
}

@property (retain, nonatomic) SBHStackConfiguration *configuration;
@property (retain, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) SBHWidgetConfigurationInteraction *widgetConfigurationInteraction;
@property (retain, nonatomic) CHSAvocadoDescriptorProvider *descriptorProvider;
@property (weak, nonatomic) id<SBHStackConfigurationViewControllerAppearanceDelegate> appearanceDelegate;
@property (weak, nonatomic) id<SBHStackConfigurationViewControllerDelegate> delegate;
@property (weak, nonatomic) id<SBHWidgetSheetViewControllerPresenter> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)configurationInteractionDidEnd:(id)a0;
- (void)configurationInteractionDidCommit:(id)a0;
- (id)sourceIconViewForConfigurationInteraction:(id)a0;
- (id)containerViewControllerForConfigurationInteraction:(id)a0;
- (void)closeButtonTapped:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)loadView;
- (void)_setupTableView;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupCloseButton;
- (void)didToggleSmartRotation:(id)a0;
- (void)_saveConfiguration;
- (void)_presentConfigurationForDataSource:(id)a0;
- (id)initWithConfiguration:(id)a0 iconView:(id)a1 descriptorProvider:(id)a2;
- (id)sourceViewForConfigurationInteraction:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;

@end
