@class PXHUDBoxedValueVisualization, PXHUDVisualization, NSString, PXTimeInterval, PXHUDView, PXHUDTimeIntervalVisualization;

@interface PUPhotoEditPerfHUD : UIView

@property (retain, nonatomic) PXHUDView *hudView;
@property (retain, nonatomic) PXHUDVisualization *detailVisualization;
@property (retain, nonatomic) PXHUDBoxedValueVisualization *firstSinceBootVisualization;
@property (retain, nonatomic) PXHUDBoxedValueVisualization *firstSinceLaunchVisualization;
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *enterEditVisualization;
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *resourceLoadingVisualization;
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *resourceCheckingVisualization;
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *resourceDownloadVisualization;
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *autoCalcVisualization;
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *filterVisualization;
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *exitEditVisualization;
@property (copy, nonatomic) NSString *detailText;
@property (nonatomic, getter=isFirstSinceBoot) BOOL firstSinceBoot;
@property (nonatomic, getter=isFirstSinceLaunch) BOOL firstSinceLaunch;
@property (retain, nonatomic) PXTimeInterval *enterEditTimeInterval;
@property (retain, nonatomic) PXTimeInterval *resourceCheckingInterval;
@property (retain, nonatomic) PXTimeInterval *resourceDownloadInterval;
@property (retain, nonatomic) PXTimeInterval *resourceLoadingInterval;
@property (retain, nonatomic) PXTimeInterval *autoCalcInterval;
@property (retain, nonatomic) PXTimeInterval *filterInterval;
@property (retain, nonatomic) PXTimeInterval *exitEditTimeInterval;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
