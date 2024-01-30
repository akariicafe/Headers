@class HKChartSummaryTrendModel, NSString, NSNumber, NSMutableArray, HKAudioExposureDevicesDataSource;

@interface HKOverlayRoomAudioViewController : HKOverlayRoomViewController <HKAudioExposureDevicesDataSourceObserver> {
    NSNumber *_preferredOverlayIndex;
}

@property (readonly, nonatomic) NSString *quantityTypeIdentifier;
@property (readonly, nonatomic) long long preferredOverlay;
@property (retain, nonatomic) NSMutableArray *contextDelegates;
@property (retain, nonatomic) HKAudioExposureDevicesDataSource *audioExposureDevicesDataSource;
@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)createChartOverlayViewController;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)contextSectionsForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)initialSelectedContextForMode:(long long)a0;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 identifier:(id)a3 preferredOverlay:(long long)a4 trendModel:(id)a5;
- (id)showAllFiltersButtonTitle;
- (long long)_initialPillForPreference:(long long)a0;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (void)_setupAudioExposureDataSourceIfNeeded;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 identifier:(id)a3 preferredOverlay:(long long)a4 audioExposureDeviceDataSource:(id)a5 trendModel:(id)a6;
- (void)_registerForAudioExposureDeviceUpdates;
- (BOOL)_isEnvironmentalAudioExposureRoom;
- (id)_buildAudioAverageDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2 averageOverVisibleRange:(BOOL)a3;
- (id)_makeHeadphoneDeviceFiltersUsingContextCreator:(id /* block */)a0;
- (id)_headphonePredicateForDevices:(id)a0 withName:(id)a1;
- (void)_reloadAudioExposureDevices;
- (BOOL)_isAudioExposureDevicesSupported;
- (id /* block */)_userInfoCreationBlockForLEQ;
- (id /* block */)_buildAverageDataSourceTitleFromTimeScope;
- (void)audioExposureDataSourceIsReady:(id)a0;

@end
