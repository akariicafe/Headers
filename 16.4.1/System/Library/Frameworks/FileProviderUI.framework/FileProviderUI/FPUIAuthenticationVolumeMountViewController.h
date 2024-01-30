@class NSArray, NSMutableIndexSet;

@interface FPUIAuthenticationVolumeMountViewController : FPUIAuthenticationTableViewController {
    NSArray *_allVolumeRepresentations;
    NSArray *_mountedVolumeIdentifiers;
    NSMutableIndexSet *_selectedVolumesIndexes;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_done:(id)a0;
- (id)tableCellCheckmarkImageDisabled;
- (void)selectedVolumesIndexesDidChange;
- (BOOL)_canMoveToNextStep;
- (id)defaultRightBarButtonItem;
- (id)initWithVolumes:(id)a0 mountedVolumeIdentifiers:(id)a1;
- (void)setupTableViewSections;

@end
