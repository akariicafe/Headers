@interface APPCMetricsVideoView : APPCMetricsView {
    void /* unknown type, empty encoding */ representationFetched;
    void /* unknown type, empty encoding */ videoView;
    void /* unknown type, empty encoding */ videoIsFullscreen;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ privacyMarker;

- (void)didAddSubview:(id)a0;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)beginAction;
- (void)onDidEnterFullscreen:(id)a0;
- (void)onDidLeaveFullscreen:(id)a0;

@end
