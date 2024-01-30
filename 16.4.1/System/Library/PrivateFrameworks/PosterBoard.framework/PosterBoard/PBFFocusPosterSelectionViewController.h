@class NSMapTable, NSDictionary, PBFFocusPosterSuggestionData, UICollectionViewDiffableDataSource, NSMutableArray, UIColor, PRSwitcherConfiguration, NSString, PBFPosterGalleryDataProvider, PBFPosterExtensionDataStore, NSAttributedString, NSArray, NSUUID;
@protocol PBFFocusPosterSelectionViewControllerDelegate, BSInvalidatable;

@interface PBFFocusPosterSelectionViewController : UICollectionViewController <PBFPosterExtensionDataStoreObserver, PREditingSceneViewControllerDelegate, PBFPosterGalleryPreviewViewControllerDelegate, PREditingSceneViewControllerObserver, UIViewControllerTransitioningDelegate, PBFPosterEditingIngestionManagerDelegate, PBFPosterRackCollectionViewControllerDelegate> {
    NSUUID *_activityUUID;
    NSString *_activityIdentifier;
    NSString *_activitySymbolImageName;
    UIColor *_activitySymbolColor;
    PBFPosterGalleryDataProvider *_galleryDataProvider;
    UICollectionViewDiffableDataSource *_dataSource;
    id<BSInvalidatable> _editingSessionInProgressAssertion;
    BOOL _receivedSuggestionsResponse;
    PBFFocusPosterSuggestionData *_suggestionData;
    NSAttributedString *_createLockScreensFromSuggestionsHeaderDescription;
    NSAttributedString *_createLockScreensHeaderDescription;
    PBFPosterExtensionDataStore *_dataStore;
    PRSwitcherConfiguration *_switcherConfiguration;
    NSArray *_configurations;
    NSDictionary *_uuidsToConfigurations;
    NSMapTable *_configurationsToMetadata;
    NSMutableArray *_nonFocusAssociatedConfigurations;
}

@property (weak, nonatomic) id<PBFFocusPosterSelectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_cancelBarButtonItem;
- (id)_doneBarButtonItem;
- (id)compositionalLayout;
- (void)editingSceneViewController:(id)a0 userDidDismissWithAction:(long long)a1 updatedConfiguration:(id)a2 updatedConfiguredProperties:(id)a3 completion:(id /* block */)a4;
- (void)editingSceneViewControllerDidFinalize:(id)a0;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })topButtonLayoutForEditingSceneViewController:(id)a0;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (id)mastheadSectionWithEnvironment:(id)a0;
- (id)sectionWithEnvironment:(id)a0 section:(id)a1;
- (void)_applySnapshotForCurrentStateWithAnimation:(BOOL)a0;
- (id)_cellForItemAtIndexPath:(id)a0 identifier:(id)a1;
- (void)_commitCheckedStates;
- (id)_createLockScreenFromSuggestionsHeaderDescription;
- (id)_createLockScreenHeaderDescription;
- (void)_logEditWithEditingViewController:(id)a0 posterUUID:(id)a1 lastModifiedDate:(id)a2;
- (void)_populateActivityMetadata;
- (id)_posterLimitExceededAlert;
- (void)_reloadDataWithAnimation:(BOOL)a0;
- (void)_showEditingForPoster:(id)a0 fromFocusPosterCell:(id)a1;
- (void)_showGallery;
- (id)_supplementaryViewAtIndexPath:(id)a0;
- (void)editingIngestionManager:(id)a0 didAccept:(id)a1 userChoice:(long long)a2;
- (void)galleryViewController:(id)a0 didSelectPreview:(id)a1 fromPreviewView:(id)a2;
- (void)galleryViewController:(id)a0 willDisplayPreview:(id)a1;
- (id)galleryViewController:(id)a0 willUseAnimationController:(id)a1 forDismissingEditingViewControllerWithAction:(long long)a2;
- (id)initWithActivityUUID:(id)a0 activityIdentifier:(id)a1 galleryDataProvider:(id)a2 dataStore:(id)a3;
- (void)posterExtensionDataStoreDidUpdateConfigurations:(id)a0;
- (void)posterRackCollectionViewControllerDidPressCancel:(id)a0;
- (BOOL)posterRackCollectionViewControllerDidPressDone:(id)a0;

@end
