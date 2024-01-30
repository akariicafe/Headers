@class HKChartSummaryTrendModel, NSString, NSNumber, NSMutableArray, HKAudioExposureDevicesDataSource;

@interface HKOverlayRoomAudioViewController : HKOverlayRoomViewController <HKAudioExposureDevicesDataSourceObserver, HKOverlayRoomTrendModelProviding> {
    NSNumber *_preferredOverlayIndex;
}

@property (readonly, nonatomic) NSString *quantityTypeIdentifier;
@property (readonly, nonatomic) long long preferredOverlay;
@property (retain, nonatomic) NSMutableArray *contextDelegates;
@property (retain, nonatomic) HKAudioExposureDevicesDataSource *audioExposureDevicesDataSource;
@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel;
@property (nonatomic) BOOL isShowingUnattenuatedOverlayPill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)contextSectionContainersForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (BOOL)supportsShowAllFilters;
- (void)audioExposureDataSourceIsReady:(id)a0;
- (id)_buildAudioAverageDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2 averageOverVisibleRange:(BOOL)a3 attenuated:(BOOL)a4;
- (id /* block */)_buildAverageDataSourceTitleFromTimeScope:(BOOL)a0;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id)_headphonePredicateForDevices:(id)a0 withName:(id)a1;
- (long long)_initialPillForPreference:(long long)a0;
- (BOOL)_isAudioExposureDevicesSupported;
- (BOOL)_isEnvironmentalAudioExposureRoom;
- (BOOL)_isHeadphoneAudioExposureRoom;
- (id)_makeHeadphoneDeviceFiltersUsingContextCreator:(id /* block */)a0;
- (void)_registerForAudioExposureDeviceUpdates;
- (void)_reloadAudioExposureDevices;
- (void)_setupAudioExposureDataSourceIfNeeded;
- (BOOL)_shouldShowUnattenuatedOverlayPill;
- (id)_unattenuatedBaseDisplayTypeForPrimaryDisplayType:(id)a0 applicationItems:(id)a1;
- (id /* block */)_userInfoCreationBlockForLEQ;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 identifier:(id)a3 preferredOverlay:(long long)a4 audioExposureDeviceDataSource:(id)a5 trendModel:(id)a6;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 identifier:(id)a3 preferredOverlay:(long long)a4 trendModel:(id)a5;
- (id)initialSelectedContextForMode:(long long)a0 containerIndex:(long long)a1;
- (void)sampleTypeDateRangeController:(id)a0 didUpdateDateRanges:(id)a1;
- (id)showAllFiltersButtonTitle;

@end
