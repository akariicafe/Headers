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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VUIFamilyMember *familyMember;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)_accountsChanged:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_networkReachabilityDidChange:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)_deviceMediaLibrary;
- (BOOL)vui_ppt_isLoading;
- (void)dataSourceDidFinishFetching:(id)a0;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_addMediaLibraryNotificationObservers;
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
