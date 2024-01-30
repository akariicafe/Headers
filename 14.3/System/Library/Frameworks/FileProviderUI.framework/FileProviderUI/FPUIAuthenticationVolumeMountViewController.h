@class NSArray, NSMutableIndexSet;

@interface FPUIAuthenticationVolumeMountViewController : FPUIAuthenticationTableViewController {
    NSArray *_allVolumeRepresentations;
    NSArray *_mountedVolumeIdentifiers;
    NSMutableIndexSet *_selectedVolumesIndexes;
}

- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)viewDidLoad;
- (BOOL)_canMoveToNextStep;
- (id)tableCellCheckmarkImageDisabled;
- (void)selectedVolumesIndexesDidChange;
- (id)initWithVolumes:(id)a0 mountedVolumeIdentifiers:(id)a1;
- (id)defaultRightBarButtonItem;
- (void)setupTableViewSections;

@end
