@class NSString, MSDSearchResultViewController, UINavigationController, MSDKManagedDevice, UISheetPresentationControllerDetent, MSDMapViewController, NSObject, CLLocation, MSDStoreInfo;
@protocol OS_dispatch_queue;

@interface MSDStoreSearchViewController : UIViewController <UISheetPresentationControllerDelegate, MSDSearchResultViewControllerDelegate, MSDMapViewControllerDelegate>

@property (retain, nonatomic) NSString *customDetentIdentifier;
@property (retain, nonatomic) UISheetPresentationControllerDetent *customDetent;
@property (retain, nonatomic) MSDMapViewController *mapViewController;
@property (retain, nonatomic) MSDSearchResultViewController *searchResultViewController;
@property (retain, nonatomic) UINavigationController *sheetContentViewController;
@property (retain, nonatomic) CLLocation *userLocation;
@property (retain, nonatomic) MSDKManagedDevice *device;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (retain, nonatomic) MSDStoreInfo *selectedStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;
- (void)_help:(id)a0;
- (void)_lockSheetDetent;
- (id)_searchStoreWithText:(id)a0;
- (void)_showSheet;
- (void)_unlockSheetDetent;
- (void)_updateViewWithSearchText:(id)a0;
- (void)didAssignStore:(id)a0 forViewController:(id)a1;
- (void)didDeselectStore:(id)a0 forViewController:(id)a1;
- (void)didDeselectStores:(id)a0 forViewController:(id)a1;
- (void)didDismissStoreListView:(id)a0 forViewController:(id)a1;
- (void)didEnterSearchText:(id)a0 forViewController:(id)a1;
- (void)didSelectNoStoreForViewController:(id)a0;
- (void)didSelectStore:(id)a0 forViewController:(id)a1;
- (void)didSelectStores:(id)a0 forViewController:(id)a1;
- (void)userLocationDidChange:(id)a0;

@end
