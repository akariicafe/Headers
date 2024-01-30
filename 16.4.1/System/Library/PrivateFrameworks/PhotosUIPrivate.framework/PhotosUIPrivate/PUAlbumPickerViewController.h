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

- (BOOL)shouldAutorotate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)_loadSubviewsIfNeeded;
- (id)initWithSessionInfo:(id)a0;
- (id)initWithSpec:(id)a0 sessionInfo:(id)a1;
- (void)sessionInfoStatusDidChange:(id)a0;

@end
