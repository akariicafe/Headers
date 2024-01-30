@class UILabel, UIButton;

@interface HUDiagnosticsCameraTimelineView : UIView

@property (retain, nonatomic) UILabel *cameraStatusLabel;
@property (retain, nonatomic) UILabel *currentPositionLabel;
@property (retain, nonatomic) UILabel *currentEventLabel;
@property (retain, nonatomic) UILabel *currentTimelineStateLabel;
@property (retain, nonatomic) UIButton *moreButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateWithPlaybackEngine:(id)a0;

@end
