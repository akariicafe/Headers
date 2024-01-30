@interface NewsAds.BannerAdMetricsView : UIView <APPCMetricsViewReadyDelegate> {
    void /* unknown type, empty encoding */ placementIdentifier;
    void /* unknown type, empty encoding */ contentInfo;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ onLongPress;
    void /* unknown type, empty encoding */ metricsView;
    void /* unknown type, empty encoding */ promotedContentInfoObserver;
    void /* unknown type, empty encoding */ unfilledReasonObserver;
}

- (void)metricsViewCollapsed:(id)a0;
- (void)metricsViewReady:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
