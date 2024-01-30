@class NSString, NSArray, UISegmentedControl, PUPhotoStreamComposeServiceViewController, UIViewController, PXVideoTrimQueueController, UIBarButtonItem, PLCloudSharedAlbum;
@protocol PUCloudSharedAlbumViewControllerDelegate;

@interface PUCloudSharedAlbumViewController : PUPhotosAlbumViewController <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PXVideoTrimQueueControllerDelegate, PXPhotoStreamComposeServiceDelegate, PXAssetsSharingHelperDelegate> {
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
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (BOOL)prepareForDismissingForced:(BOOL)a0;
- (void)viewDidLoad;
- (BOOL)assetsSharingHelper:(id)a0 presentViewController:(id)a1;
- (id)px_navigationDestination;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)assetsSharingHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)canDeleteContent;
- (id)_suppressionContexts;
- (void)albumStreamingOptionsViewController:(id)a0 didCompleteWithReason:(int)a1;
- (void)controller:(id)a0 didCancelTrimmingVideoSources:(id)a1;
- (void)controller:(id)a0 didFinishTrimmingVideoSources:(id)a1;
- (void)controller:(id)a0 dismissViewControllerWithCompletion:(id /* block */)a1;
- (void)controller:(id)a0 presentViewController:(id)a1;
- (void)photoStreamComposeService:(id)a0 didPostComment:(id)a1;
- (void)photoStreamComposeServiceDidCancel:(id)a0;
- (void)_dismissOptionsPopoverAnimated:(BOOL)a0;
- (id)newToolbarItems;
- (BOOL)_canDisplayOptions;
- (void)_handleSwitcherSegmentedControl:(id)a0;
- (id)_newOptionsViewController;
- (void)_optionsBarButtonItemPressed:(id)a0;
- (void)_presentOptionsPopoverFromBarButtonItem:(id)a0;
- (BOOL)_shouldShowOptionsSwitcherInToolbar;
- (void)_updateOptionsView;
- (void)_updateOptionsViewInsets;
- (BOOL)canAddToOtherAlbumContent;
- (void)didSelectAddPlaceholderInSection:(long long)a0;
- (void)getTitle:(out id *)a0 prompt:(out id *)a1 shouldHideBackButton:(out BOOL *)a2 leftBarButtonItems:(out id *)a3 rightBarButtonItems:(out id *)a4;
- (id)globalFooterSubtitle;
- (void)handleAddToAlbum:(id)a0 pickedAssets:(id)a1;
- (void)setAlbum:(id)a0 existingFetchResult:(id)a1;
- (BOOL)shouldShowTabBar;
- (BOOL)shouldShowToolbar;
- (void)updatePeripheralInterfaceAnimated:(BOOL)a0;
- (BOOL)wantsAddContentInToolbar;
- (BOOL)wantsAddPlaceholderAtEndOfSection:(long long)a0;
- (BOOL)wantsGlobalFooter;

@end
