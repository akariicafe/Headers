@interface VideosUI.MediaShowcaseHostingViewController : VUIBaseViewController {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ notificationObservers;
    void /* unknown type, empty encoding */ metadataViewTopOffsetObserver;
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ isTabbarChild;
    void /* unknown type, empty encoding */ hasViewDisappeared;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paginatedMediaController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_toolBar;
    void /* unknown type, empty encoding */ toolBarOffsetY;
    void /* unknown type, empty encoding */ lastViewWidth;
    void /* unknown type, empty encoding */ lastSizeClass;
    void /* unknown type, empty encoding */ didSetupView;
    void /* unknown type, empty encoding */ isPaused;
    void /* unknown type, empty encoding */ isControlButtonsVisible;
    void /* unknown type, empty encoding */ shouldShowMuteButton;
    void /* unknown type, empty encoding */ hideMuteButtonTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mediaShowcaseConfig;
    void /* unknown type, empty encoding */ accountSettingViewModel;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)vui_loadView;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillDisappear:(BOOL)a0;

@end
