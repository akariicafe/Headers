@interface HealthRecordsUI.ChartOverlayViewController : HKOverlayRoomViewController {
    void /* unknown type, empty encoding */ chartDefining;
    void /* unknown type, empty encoding */ chartType;
    void /* unknown type, empty encoding */ displayTypes;
    void /* unknown type, empty encoding */ chartabilityResult;
}

- (void).cxx_destruct;
- (id)contextSectionContainersForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (BOOL)supportsShowAllFilters;

@end
