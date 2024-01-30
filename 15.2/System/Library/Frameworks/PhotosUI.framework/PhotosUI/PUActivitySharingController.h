@class PUCarouselSharingViewController, PUActivityViewController, NSArray, PHPerson, PHAsset, PUActivitySharingViewModel, NSDictionary, NSString, PXSelectionSnapshot, UIActivityViewController, PHResourceLocalAvailabilityRequest;
@protocol PXActivityViewController, PXActivitySharingControllerDelegate;

@interface PUActivitySharingController : NSObject <PUActivityViewControllerDelegate, UIActivityViewControllerAirDropDelegate, PUCarouselSharingViewControllerDelegate, UIPresentationControllerDelegatePrivate, PXChangeObserver, PXActivitySharingController> {
    BOOL _activityViewControllerWasCreated;
}

@property (retain, nonatomic) PUActivitySharingViewModel *viewModel;
@property (copy, nonatomic) NSDictionary *assetsFetchResultsByAssetCollection;
@property (nonatomic) BOOL allowsAirPlayActivity;
@property (nonatomic) BOOL allowsRemoveFromFeaturedPhotosActivity;
@property (nonatomic) BOOL allowsSuggestLessPersonActivity;
@property (nonatomic) BOOL allowsEditDateTimeActivity;
@property (nonatomic) BOOL allowsEditLocationActivity;
@property (retain, nonatomic) PHPerson *person;
@property (copy, nonatomic) NSArray *excludedActivityTypes;
@property (copy, nonatomic) NSArray *activities;
@property (retain, nonatomic) PUCarouselSharingViewController *carouselViewController;
@property (readonly, nonatomic) BOOL excludeShareActivity;
@property (retain, nonatomic) PHResourceLocalAvailabilityRequest *resourcesPreheatRequest;
@property (weak, nonatomic) PUActivityViewController *internalActivityViewController;
@property (weak, nonatomic) id<PXActivitySharingControllerDelegate> delegate;
@property (readonly, nonatomic) UIActivityViewController<PXActivityViewController> *activityViewController;
@property (readonly, nonatomic) PHAsset *currentAsset;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) NSDictionary *selectedAssetsByAssetCollection;
@property (readonly, nonatomic) NSArray *selectedAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)photosDataSource;
- (void)activityViewControllerWillDisappear:(id)a0;
- (void)carouselSharingViewController:(id)a0 replaceAssetItem:(id)a1 withAssetItem:(id)a2;
- (BOOL)activityViewControllerShouldCancelAfterPreparationCanceled:(id)a0;
- (id)initWithActivitySharingConfiguration:(id)a0;
- (void)_createCarouselSharingViewControllerIfNeeded;
- (id)activityViewControllerIfAvailable;
- (id)_createActivityViewControllerWithActivities:(id)a0;
- (void)_updateExcludedActivityTypes;
- (void)_activityViewControllerDidCompleteWithActivityType:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)presentationControllerDidDismiss:(id)a0;
- (id)new;
- (void)_incrementShareCountForSelectedAssets;
- (void)_activitySharingControllerWillDismissActivityViewController;
- (void)_updateActionSheetPresentationStyleIfNeeded;
- (void)_updateSelectedAssetIdentifiers;
- (void)_handlePreheatRequestCompletionWithSuccess:(BOOL)a0 cancelled:(BOOL)a1 error:(id)a2;
- (void)_cancelPreheatResourcesRequest;
- (void)_updatePreheatResourcesRequest;
- (void)selectAllAssets;
- (void).cxx_destruct;
- (void)_cancel;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)carouselSharingViewController:(id)a0 addAssetItem:(id)a1;
- (void)carouselSharingViewController:(id)a0 removeAssetItem:(id)a1;
- (void)carouselSharingViewController:(id)a0 setAssetItems:(id)a1;
- (void)_preheatResources;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)a0;

@end
