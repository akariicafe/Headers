@interface HealthRecordsUI.ChartOverlayViewController : HKOverlayRoomViewController {
    void /* unknown type, empty encoding */ chartDefining;
    void /* unknown type, empty encoding */ chartType;
    void /* unknown type, empty encoding */ displayTypes;
    void /* unknown type, empty encoding */ chartabilityResult;
}

- (void).cxx_destruct;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2;
- (BOOL)supportsShowAllFilters;
- (id)createChartOverlayViewController;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)contextSectionsForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)initialSelectedContextForMode:(long long)a0;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;

@end
