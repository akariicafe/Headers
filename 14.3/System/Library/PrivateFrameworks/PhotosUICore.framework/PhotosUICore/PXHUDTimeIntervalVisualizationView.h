@class PXHUDTimeIntervalVisualization, UILabel, NSTimer;

@interface PXHUDTimeIntervalVisualizationView : PXHUDAbstractVisualizationView {
    UILabel *_titleAndTimeLabel;
    NSTimer *_timer;
}

@property (retain, nonatomic) PXHUDTimeIntervalVisualization *visualization;

- (void)_updateTimer;
- (void)_cleanupTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)visualizationDidUpdate;
- (void)_timerTick;
- (void)_setupTimer;
- (void)_updateTitleAndTimeLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
