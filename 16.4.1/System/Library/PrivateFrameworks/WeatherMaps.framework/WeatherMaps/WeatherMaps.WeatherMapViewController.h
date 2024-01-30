@interface WeatherMaps.WeatherMapViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ resolver;
    void /* unknown type, empty encoding */ snapshotViewController;
    void /* unknown type, empty encoding */ interactiveViewController;
    void /* unknown type, empty encoding */ locationPickerViewController;
    void /* unknown type, empty encoding */ locationPopoverViewController;
    void /* unknown type, empty encoding */ previewViewController;
    void /* unknown type, empty encoding */ locationActionHandler;
    void /* unknown type, empty encoding */ canAddLocationHandler;
    void /* unknown type, empty encoding */ canViewLocationHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_supplementaryOverlayContainerView;
    void /* unknown type, empty encoding */ supplementaryOverlayViewController;
    void /* unknown type, empty encoding */ activeTraitCollection;
    void /* unknown type, empty encoding */ storeObserver;
    void /* unknown type, empty encoding */ lastViewModel;
    void /* unknown type, empty encoding */ viewModelToUpdate;
    void /* unknown type, empty encoding */ lastViewBounds;
    void /* unknown type, empty encoding */ resizeTimer;
    void /* unknown type, empty encoding */ prefersControlsHidden;
    void /* unknown type, empty encoding */ isResizing;
    void /* unknown type, empty encoding */ bannerUpdateBlock;
    void /* unknown type, empty encoding */ isCrossfadingSnapshot;
}

- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)a0;
- (void)mapSnapshotViewDidRetrieveSnapshot:(id)a0;
- (void)willMoveToParentViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;

@end
