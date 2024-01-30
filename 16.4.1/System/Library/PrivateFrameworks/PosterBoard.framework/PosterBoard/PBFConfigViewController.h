@class NSString, PRSwitcherConfiguration, NSArray, PBFPosterExtensionDataStoreXPCServiceGlue;

@interface PBFConfigViewController : UITableViewController <PBFPosterExtensionDataStoreObserver, PREditingSceneViewControllerDelegate> {
    PBFPosterExtensionDataStoreXPCServiceGlue *_glue;
    PRSwitcherConfiguration *_switcherConfiguration;
    NSArray *_configurations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_reloadData;
- (void)posterExtensionDataStore:(id)a0 didUpdateSelectedConfiguration:(id)a1 associatedConfiguration:(id)a2;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)editingSceneViewController:(id)a0 userDidDismissWithAction:(long long)a1 updatedConfiguration:(id)a2 updatedConfiguredProperties:(id)a3 completion:(id /* block */)a4;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })topButtonLayoutForEditingSceneViewController:(id)a0;
- (void)_updateEditing:(BOOL)a0;
- (id)_posterConfigurationAtIndexPath:(id)a0;
- (id)_posterPathAtIndexPath:(id)a0;
- (void)_presentPath:(id)a0 mode:(long long)a1;
- (id)_previewForPathAtIndexPath:(id)a0;
- (void)_selectConfiguration:(id)a0;
- (void)_toggleEdit:(id)a0;
- (void)posterExtensionDataStoreDidUpdateConfigurations:(id)a0;

@end
