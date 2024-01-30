@class UINavigationController, PUAlbumPickerViewControllerSpec, PHCollectionList, NSString, PUAlbumPickerSessionInfo, PUAlbumListViewController;

@interface PUAlbumPickerViewController : UIViewController <PUSessionInfoObserver>

@property (nonatomic) BOOL didLoadSubviews;
@property (retain, nonatomic, setter=_setContentNavigationController:) UINavigationController *contentNavigationController;
@property (retain, nonatomic, setter=_setAlbumListViewController:) PUAlbumListViewController *_albumListViewController;
@property (retain, nonatomic, setter=_setSpec:) PUAlbumPickerViewControllerSpec *spec;
@property (retain, nonatomic, setter=_setSessionInfo:) PUAlbumPickerSessionInfo *albumPickerSessionInfo;
@property (retain, nonatomic) PHCollectionList *collectionList;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (id)initWithSpec:(id)a0 sessionInfo:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)sessionInfoStatusDidChange:(id)a0;
- (id)initWithSessionInfo:(id)a0;
- (void)_loadSubviewsIfNeeded;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
