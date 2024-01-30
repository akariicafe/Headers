@class NSNumber;

@interface HKOverlayRoomHeartViewController : HKOverlayRoomViewController {
    NSNumber *_preferredOverlayIndex;
}

@property (readonly, nonatomic) long long preferredOverlay;

- (void).cxx_destruct;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)contextSectionsForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)initialSelectedContextForMode:(long long)a0;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (void)viewDidLoad;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 preferredOverlay:(long long)a3;
- (long long)_initialPillForPreference:(long long)a0;

@end
