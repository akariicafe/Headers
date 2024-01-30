@class UITableView, NSString, OKProducerPreset, PUSlideshowSettingsViewControllerSpec, PUSlideshowSettingsViewModel, PUSlideshowMediaItem, PUSlideshowSession;
@protocol PUSlideshowSettingsViewControllerDelegate;

@interface PUSlideshowSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate, PUSlideshowThemeDelegate, PUSlideshowSettingsViewModelChangeObserver, PUViewControllerSpecChangeObserver, PUSlideshowSpeedCellDelegate, PUSlideshowMusicDelegate> {
    PUSlideshowSession *_session;
    PUSlideshowSettingsViewModel *_settingsViewModel;
    PUSlideshowSettingsViewControllerSpec *_spec;
    UITableView *_tableView;
    BOOL _shouldHideTableViewWhenViewWillDisappear;
}

@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec;
@property (nonatomic, setter=_setNeedsUpdateTableView:) BOOL _needsUpdateTableView;
@property (nonatomic, setter=_setNeedsUpdateNavigationBar:) BOOL _needsUpdateNavigationBar;
@property (nonatomic, setter=_setNeedsUpdatePreset:) BOOL _needsUpdatePreset;
@property (nonatomic, setter=_setNeedsUpdateMediaItem:) BOOL _needsUpdateMediaItem;
@property (nonatomic, setter=_setNeedsUpdateMusicOn:) BOOL _needsUpdateMusicOn;
@property (retain, nonatomic, setter=_setPendingPreset:) OKProducerPreset *_pendingPreset;
@property (retain, nonatomic, setter=_setPendingMediaItem:) PUSlideshowMediaItem *_pendingMediaItem;
@property (weak, nonatomic) id<PUSlideshowSettingsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_setNeedsUpdate;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)_invalidateSpec;
- (void)_updateSpecIfNeeded;
- (void)PUSlideshowSpeedCell:(id)a0 stepDurationDidChange:(double)a1;
- (void)_didTapDoneButton:(id)a0;
- (void)_invalidateMediaItem;
- (void)_invalidateMusicOn;
- (void)_invalidateNavigationBar;
- (void)_invalidatePreset;
- (void)_invalidateTableView;
- (void)_synchronizedChangedSettings;
- (void)_toggleMusic:(id)a0;
- (void)_toggleRepeat:(id)a0;
- (void)_updateMediaItemIfNeeded;
- (void)_updateMusicOnIfNeeded;
- (void)_updateNavigationBarIfNeeded;
- (void)_updatePresetIfNeeded;
- (void)_updateTableViewIfNeeded;
- (void)musicPicker:(id)a0 didPickMediaItem:(id)a1;
- (void)musicPickerDidFinish:(id)a0;
- (void)themePicker:(id)a0 didPickPreset:(id)a1;
- (void)themePickerDidFinish:(id)a0;
- (void)viewControllerSpec:(id)a0 didChange:(id)a1;

@end
