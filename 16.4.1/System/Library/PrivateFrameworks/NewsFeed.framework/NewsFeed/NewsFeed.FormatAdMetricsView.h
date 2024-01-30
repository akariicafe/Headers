@interface NewsFeed.FormatAdMetricsView : UIView <APPCMetricsViewReadyDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ metricsView;
    void /* unknown type, empty encoding */ privacyMarker;
    void /* unknown type, empty encoding */ onCollapse;
}

- (void)metricsViewCollapsed:(id)a0;
- (void)metricsViewReady:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
