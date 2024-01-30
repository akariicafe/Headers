@interface PosterBoard.PosterStore : NSObject <PBFPosterExtensionDataStoreObserver> {
    void /* unknown type, empty encoding */ posterFilter;
    void /* unknown type, empty encoding */ currentSelectionIndex;
    void /* unknown type, empty encoding */ significantEventsCounter;
    void /* unknown type, empty encoding */ glue;
    void /* unknown type, empty encoding */ allPosters;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ switcherConfig;
    void /* unknown type, empty encoding */ forcePersistSelectionForFocusUpdate;
}

- (void)posterExtensionDataStore:(id)a0 didUpdateConfiguration:(id)a1;
- (void)posterExtensionDataStore:(id)a0 didUpdateActiveConfiguration:(id)a1 associatedConfiguration:(id)a2;
- (void)posterExtensionDataStore:(id)a0 posterConfiguration:(id)a1 didUpdateAssociatedHomeScreenPosterConfigurationTo:(id)a2;
- (id)init;
- (void)posterExtensionDataStore:(id)a0 didUpdateSelectedConfiguration:(id)a1 associatedConfiguration:(id)a2;
- (void).cxx_destruct;
- (void)dataStoreDidTearDown;
- (void)posterExtensionDataStore:(id)a0 didAddConfiguration:(id)a1;
- (void)posterExtensionDataStore:(id)a0 didDeleteConfiguration:(id)a1;
- (void)posterExtensionDataStore:(id)a0 didUpdateGalleryConfiguration:(id)a1;
- (void)posterExtensionDataStore:(id)a0 didUpdateSnapshotForConfiguration:(id)a1;
- (void)posterExtensionDataStore:(id)a0 didUpdateSwitcherConfiguration:(id)a1;
- (void)posterExtensionDataStoreDidUpdateConfigurations:(id)a0;

@end
