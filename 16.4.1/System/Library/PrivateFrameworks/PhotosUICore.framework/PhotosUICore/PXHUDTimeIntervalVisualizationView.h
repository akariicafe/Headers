@class PXHUDTimeIntervalVisualization, UILabel, NSTimer;

@interface PXHUDTimeIntervalVisualizationView : PXHUDAbstractVisualizationView {
    UILabel *_titleAndTimeLabel;
    NSTimer *_timer;
}

@property (retain, nonatomic) PXHUDTimeIntervalVisualization *visualization;

- (void)_updateTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_cleanupTimer;
- (void)dealloc;
- (void)_setupTimer;
- (void).cxx_destruct;
- (void)_timerTick;
- (void)_updateTitleAndTimeLabel;
- (void)visualizationDidUpdate;

@end
