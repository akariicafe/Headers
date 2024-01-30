@class NSString, PUTabbedLibraryViewController, PHPhotosPickerOptions, PUPhotosPickerViewControllerSpec, PUPhotosPickerSessionInfo;

@interface PUPhotosPickerViewController : UIViewController <UITabBarControllerDelegate, PLAssetContainerListChangeObserver, PUSessionInfoObserver> {
    PUPhotosPickerViewControllerSpec *_spec;
    PUPhotosPickerSessionInfo *_photosPickerSessionInfo;
    BOOL _needsToSetupOptions;
}

@property (retain, nonatomic, setter=_setTabbedLibraryViewController:) PUTabbedLibraryViewController *_tabbedLibraryViewController;
@property (retain, nonatomic) PHPhotosPickerOptions *photosPickerOptions;
@property (nonatomic) int currentContentMode;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithSpec:(id)a0 targetAlbumName:(id)a1 options:(id)a2;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)tabBarController:(id)a0 didSelectViewController:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithSpec:(id)a0 targetAlbumName:(id)a1;
- (void)assetContainerListDidChange:(id)a0;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (void)sessionInfoStatusDidChange:(id)a0;
- (id)initWithSpec:(id)a0 targetAlbum:(id)a1;
- (id)_initWithSpec:(id)a0 targetAlbum:(id)a1 orTargetAlbumName:(id)a2 options:(id)a3;

@end
