@class NSString;

@interface GameCenterUI.DashboardSidebarPresenter : GameCenterUI.BasePresenter {
    void /* unknown type, empty encoding */ pageMetricsPresenter;
    void /* unknown type, empty encoding */ launchContext;
    void /* unknown type, empty encoding */ onSelectedItem;
    void /* unknown type, empty encoding */ onRequiredDataChanged;
    void /* unknown type, empty encoding */ game;
    void /* unknown type, empty encoding */ selectedItem;
    void /* unknown type, empty encoding */ intentOnFirstLoad;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ requiredData;
    void /* unknown type, empty encoding */ requiredDataPresenter;
    void /* unknown type, empty encoding */ dashboardDisplayMode;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ request;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (void)handleViewDidLoad;
- (id)initWithPlayerId:(id)a0;

@end
