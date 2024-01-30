@class UILabel, CALayer, NSMutableArray;

@interface AVTHUDView : UIView {
    UILabel *_totalLatencyLabel;
    UILabel *_arKitLatencyLabel;
    UILabel *_updateSyncLatencyLabel;
    UILabel *_metalLatencyLabel;
    UILabel *_fpsLabel;
    UILabel *_audioTimeLabel;
    UILabel *_timeBetweenARFrameLabel;
    UILabel *_droppedFrameLabel;
    UILabel *_shaderCompilationLabel;
    struct { double totalLatency; double arKitLatency; double updateSyncLatency; double metalLatency; double timeBetweenARFrame; unsigned int fps; double audioTime; unsigned int droppedFrame; BOOL doubleBuffer; unsigned int onlineShaderCompilationCount; } _lastFrameData;
    CALayer *_arKitLatencyBar;
    CALayer *_updateLatencyBar;
    CALayer *_metalLatencyBar;
    NSMutableArray *_totalLatencyGraphLayers;
    int _selectedGraphIndex;
}

- (id)_label;
- (void).cxx_destruct;
- (void)_tapAction:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithData:(struct { double x0; double x1; double x2; double x3; double x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; unsigned int x9; })a0;
- (void)_loadSubviews;
- (void)_updateLatencyBar:(struct { double x0; double x1; double x2; double x3; double x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; unsigned int x9; } *)a0;
- (void)_updateLatencyGraph:(struct { double x0; double x1; double x2; double x3; double x4; unsigned int x5; double x6; unsigned int x7; BOOL x8; unsigned int x9; } *)a0;

@end
