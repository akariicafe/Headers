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

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSpec:(id)a0 targetAlbum:(id)a1;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)assetContainerListDidChange:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)_initWithSpec:(id)a0 targetAlbum:(id)a1 orTargetAlbumName:(id)a2 options:(id)a3;
- (void)tabBarController:(id)a0 didSelectViewController:(id)a1;
- (id)initWithSpec:(id)a0 targetAlbumName:(id)a1 options:(id)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithSpec:(id)a0 targetAlbumName:(id)a1;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)sessionInfoStatusDidChange:(id)a0;
- (void)viewWillLayoutSubviews;

@end
