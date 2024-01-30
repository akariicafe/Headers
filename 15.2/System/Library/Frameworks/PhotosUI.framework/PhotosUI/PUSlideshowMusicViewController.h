@class NSString, NSArray, PUSlideshowSettingsViewControllerSpec, PUSlideshowMediaItem, UITableView;
@protocol PUSlideshowMusicDelegate;

@interface PUSlideshowMusicViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver, MPMediaPickerControllerDelegate> {
    NSArray *_mediaItems;
    UITableView *_tableView;
    PUSlideshowSettingsViewControllerSpec *_spec;
    BOOL _shouldHideTableViewWhenViewWillDisappear;
}

@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec;
@property (nonatomic, setter=_setNeedsUpdateBackgroundView:) BOOL _needsUpdateBackgroundView;
@property (nonatomic, setter=_setNeedsUpdateTableView:) BOOL _needsUpdateTableView;
@property (retain, nonatomic) PUSlideshowMediaItem *currentMediaItem;
@property (weak, nonatomic) id<PUSlideshowMusicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)mediaPicker:(id)a0 didPickMediaItems:(id)a1;
- (void)mediaPickerDidCancel:(id)a0;
- (void)dealloc;
- (void)_didFinish;
- (void)_updateSpecIfNeeded;
- (BOOL)pu_wantsNavigationBarVisible;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewControllerSpec:(id)a0 didChange:(id)a1;
- (void)_invalidateSpec;
- (void)_invalidateBackgroundView;
- (void)_invalidateTableView;
- (void)_updateBackgroundViewIfNeeded;
- (void)_updateTableViewIfNeeded;
- (void)_didPickMediaItem:(id)a0;

@end
