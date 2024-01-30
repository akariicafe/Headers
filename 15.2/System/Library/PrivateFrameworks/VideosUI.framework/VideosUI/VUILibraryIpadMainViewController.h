@class NSString, VUILibraryMenuDataSource, UINavigationController, VUIViewControllerContentPresenter, VUIMediaLibrary, UIViewController, VUILibrarySplitViewController, VUIFamilyMember;

@interface VUILibraryIpadMainViewController : UIViewController <VUILibraryDataSourceDelegate, VUILibrarySplitViewControllerDelegate, UIGestureRecognizerDelegate, VUIFamilySharingContentProtocol> {
    BOOL _ppt_isLoaded;
}

@property (nonatomic) BOOL areLocalMediaItemsAvailable;
@property (retain, nonatomic) VUILibraryMenuDataSource *menuDataSource;
@property (retain, nonatomic) VUILibrarySplitViewController *librarySplitViewController;
@property (retain, nonatomic) UIViewController *downloadViewController;
@property (retain, nonatomic) UINavigationController *downloadNavigationViewController;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (readonly, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (nonatomic) BOOL makeNavigationBarHidden;
@property (nonatomic) BOOL viewIsOrWillBeVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VUIFamilyMember *familyMember;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_accountsChanged:(id)a0;
- (void)loadView;
- (void)_networkReachabilityDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)dataSourceDidFinishFetching:(id)a0;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addMediaLibraryNotificationObservers;
- (id)_deviceMediaLibrary;
- (void)_addNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)a0;
- (BOOL)vui_ppt_isLoading;
- (BOOL)_isDeviceMediaLibraryInitialUpdateInProgress;
- (void)_startMonitoringDeviceMediaLibraryInitialUpdate;
- (BOOL)_gestureRecognizerShouldBegin;
- (void)_updateVisibleViewControllerForCategories:(id)a0 error:(id)a1;
- (void)_deviceMediaLibraryUpdateStateDidChange:(id)a0;
- (void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_declareLaunchDidFinish;
- (void)_setupDownloadViewController;
- (BOOL)_shouldShowSplitViewWithCategories:(id)a0;
- (id)initWithMenuDataSource:(id)a0;
- (void)librarySplitViewControllerShouldDismiss:(id)a0;

@end
