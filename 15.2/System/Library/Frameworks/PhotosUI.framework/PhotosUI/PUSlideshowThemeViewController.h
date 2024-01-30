@class NSString, NSArray, OKProducerPreset, PUSlideshowSettingsViewControllerSpec, UITableView;
@protocol PUSlideshowThemeDelegate;

@interface PUSlideshowThemeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver> {
    NSArray *_presets;
    UITableView *_tableView;
    PUSlideshowSettingsViewControllerSpec *_spec;
    BOOL _shouldHideTableViewWhenViewWillDisappear;
}

@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec;
@property (nonatomic, setter=_setNeedsUpdateBackgroundView:) BOOL _needsUpdateBackgroundView;
@property (nonatomic, setter=_setNeedsUpdateTableView:) BOOL _needsUpdateTableView;
@property (retain, nonatomic) OKProducerPreset *currentPreset;
@property (weak, nonatomic) id<PUSlideshowThemeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
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
- (void)_didPickPreset:(id)a0;

@end
