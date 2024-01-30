@class SBSConnectedDisplayInfo, SBSDisplayModeSettings, SBSExternalDisplayService;

@interface DBSExternalDisplayZoomSelectionListController : DBSDisplayZoomSelectionListController

@property (retain, nonatomic) SBSDisplayModeSettings *selectedDisplayModeSettings;
@property (retain, nonatomic) SBSConnectedDisplayInfo *externalDisplayInfo;
@property (retain, nonatomic) SBSExternalDisplayService *displayService;

- (void).cxx_destruct;
- (void)userDidTapDone:(id)a0;
- (void)_updateNavigationButtonStateWithNewDisplayModeSettings:(id)a0;
- (void)displayZoomTableViewCell:(id)a0 userDidTapOnDisplayZoomOption:(unsigned long long)a1;
- (unsigned long long)displayZoomTableViewCellCurrentlySelectedDisplayZoomOption:(id)a0;
- (id)supportedDisplayZoomOptions;
- (void)updateNavigationButtonStateWithCurrentState;

@end
