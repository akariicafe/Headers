@class PUPhotosPickerViewController, NSString, NSArray, UISegmentedControl, PUPhotoStreamComposeServiceViewController, UIViewController, PXVideoTrimQueueController, UIBarButtonItem, PLCloudSharedAlbum;
@protocol PUCloudSharedAlbumViewControllerDelegate;

@interface PUCloudSharedAlbumViewController : PUPhotosAlbumViewController <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PXVideoTrimQueueControllerDelegate, PXPhotoStreamComposeServiceDelegate, PXAssetsSharingHelperDelegate> {
    PUPhotosPickerViewController *_activePhotosPickerViewController;
    PXVideoTrimQueueController *_trimController;
    PUPhotoStreamComposeServiceViewController *_composeServiceController;
}

@property (retain, nonatomic, setter=_setOptionsViewController:) UIViewController *_optionsViewController;
@property (retain, nonatomic, setter=_setOptionsPopoverRootViewController:) UIViewController *_optionsPopoverRootViewController;
@property (retain, nonatomic, setter=_setTransitioningOptionsViewControllers:) NSArray *_transitioningOptionsViewControllers;
@property (retain, nonatomic, setter=_setOptionsBarButtonItem:) UIBarButtonItem *_optionsBarButtonItem;
@property (retain, nonatomic, setter=_setOptionsBarButtonSpacerItem:) UIBarButtonItem *_optionsBarButtonSpacerItem;
@property (nonatomic, setter=_setCanContributeToCloudSharedAlbum:) BOOL _canContributeToCloudSharedAlbum;
@property (retain, nonatomic, setter=_setSwitcherSegmentedControl:) UISegmentedControl *_switcherSegmentedControl;
@property (retain, nonatomic, setter=_setSwitcherBarButtonItem:) UIBarButtonItem *_switcherBarButtonItem;
@property (nonatomic, setter=_setSelectedItemIndex:) long long _selectedItemIndex;
@property (weak, nonatomic) id<PUCloudSharedAlbumViewControllerDelegate> delegate;
@property (retain, nonatomic) PLCloudSharedAlbum *album;
@property (nonatomic, getter=isDisplayingOptions, setter=setDisplayingOptions:) BOOL displayingOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)px_navigationDestination;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)prepareForDismissingForced:(BOOL)a0;
- (BOOL)shouldShowToolbar;
- (id)newToolbarItems;
- (void)getTitle:(out id *)a0 prompt:(out id *)a1 shouldHideBackButton:(out BOOL *)a2 leftBarButtonItems:(out id *)a3 rightBarButtonItems:(out id *)a4;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_suppressionContexts;
- (BOOL)assetsSharingHelper:(id)a0 presentViewController:(id)a1;
- (BOOL)assetsSharingHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)albumStreamingOptionsViewController:(id)a0 didCompleteWithReason:(int)a1;
- (void)setAlbum:(id)a0 existingFetchResult:(id)a1;
- (BOOL)canAddToOtherAlbumContent;
- (BOOL)wantsAddContentInToolbar;
- (BOOL)wantsAddPlaceholderAtEndOfSection:(long long)a0;
- (BOOL)shouldShowTabBar;
- (void)didSelectAddPlaceholderInSection:(long long)a0;
- (BOOL)wantsGlobalFooter;
- (id)globalFooterSubtitle;
- (BOOL)_shouldShowOptionsSwitcherInToolbar;
- (BOOL)_canDisplayOptions;
- (void)updatePeripheralInterfaceAnimated:(BOOL)a0;
- (void)_updateOptionsView;
- (void)_updateOptionsViewInsets;
- (void)_optionsBarButtonItemPressed:(id)a0;
- (void)_presentOptionsPopoverFromBarButtonItem:(id)a0;
- (void)_dismissOptionsPopoverAnimated:(BOOL)a0;
- (void)_handleSwitcherSegmentedControl:(id)a0;
- (id)_newOptionsViewController;
- (void)handleAddToAlbum:(id)a0 pickedAssets:(id)a1;
- (BOOL)canDeleteContent;
- (void)viewDidLoad;
- (void)controller:(id)a0 presentViewController:(id)a1;
- (void)controller:(id)a0 didFinishTrimmingVideoSources:(id)a1;
- (void)controller:(id)a0 didCancelTrimmingVideoSources:(id)a1;
- (void)controller:(id)a0 dismissViewControllerWithCompletion:(id /* block */)a1;
- (void)photoStreamComposeService:(id)a0 didPostComment:(id)a1;
- (void)photoStreamComposeServiceDidCancel:(id)a0;

@end
