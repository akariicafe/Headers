@interface NewsAds.InterstitialAdMetricsView : UIView <APPCMetricsViewReadyDelegate> {
    void /* unknown type, empty encoding */ contentIdentifier;
    void /* unknown type, empty encoding */ onLongPress;
    void /* unknown type, empty encoding */ onCollapse;
    void /* unknown type, empty encoding */ metricsView;
}

- (void)metricsViewCollapsed:(id)a0;
- (void)metricsViewReady:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
