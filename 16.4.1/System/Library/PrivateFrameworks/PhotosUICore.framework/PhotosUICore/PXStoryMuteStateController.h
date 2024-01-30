@class PXStoryModel, NSString, PXStoryViewModel, PXVolumeController;
@protocol PXUserDefaultsDataSource;

@interface PXStoryMuteStateController : PXStoryController <PXChangeObserver>

@property (retain, nonatomic) PXStoryModel *mainModel;
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, nonatomic) PXVolumeController *volumeController;
@property (readonly, nonatomic) id<PXUserDefaultsDataSource> userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateMainModel;
- (void)_invalidateMainModel;
- (void).cxx_destruct;
- (void)_saveMutedStatePreference;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithObservableModel:(id)a0;
- (id)initWithViewModel:(id)a0 volumeController:(id)a1 userDefaults:(id)a2;

@end
