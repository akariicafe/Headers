@class SBSConnectedDisplayInfo, NSString, SBSExternalDisplayService;

@interface DBSMultitaskingContinuousExposeController : PSListController <SBSExternalDisplayServiceObserver>

@property (retain, nonatomic) SBSExternalDisplayService *displayService;
@property (retain, nonatomic) SBSConnectedDisplayInfo *externalDisplayInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)externalDisplayDidConnect:(id)a0;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void)externalDisplayWillDisconnect:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)externalDisplayDidUpdateProperties:(id)a0;
- (void)reloadSpecifierLayoutChooser;
- (void)setContinuousExposeEnabled:(id)a0 specifier:(id)a1;
- (void)updateExternalDisplayInfoWithCompletionHandler:(id /* block */)a0;

@end
