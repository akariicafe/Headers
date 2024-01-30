@interface StocksUI.StockChartViewController : UIViewController {
    void /* unknown type, empty encoding */ stock;
    void /* unknown type, empty encoding */ topDateRangePickerSeparator;
    void /* unknown type, empty encoding */ bottomDateRangePickerSeparator;
    void /* unknown type, empty encoding */ bottomVolumeChartSeparator;
    void /* unknown type, empty encoding */ dateRangePicker;
    void /* unknown type, empty encoding */ lineChartViewController;
    void /* unknown type, empty encoding */ columnChartViewController;
    void /* unknown type, empty encoding */ interactionDisplayView;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ interactionHandler;
    void /* unknown type, empty encoding */ calloutViewProvider;
    void /* unknown type, empty encoding */ rangeCalloutViewProvider;
    void /* unknown type, empty encoding */ activeCallout;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ errorView;
}

- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
