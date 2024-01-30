@class UIColor, PXHUDVisualization, NSString, PXHUDView;

@interface PUPhotoEditReframeHUD : UIView {
    UIColor *_positiveColor;
    UIColor *_negativeColor;
}

@property (retain, nonatomic) PXHUDView *hudView;
@property (retain, nonatomic) PXHUDVisualization *detailVisualization;
@property (retain, nonatomic) PXHUDVisualization *pregatedVisualization;
@property (retain, nonatomic) PXHUDVisualization *overcaptureVisualization;
@property (retain, nonatomic) PXHUDVisualization *subjectsVisualization;
@property (retain, nonatomic) PXHUDVisualization *stitchedVisualization;
@property (retain, nonatomic) PXHUDVisualization *tripodVisualization;
@property (retain, nonatomic) PXHUDVisualization *buildingVisualization;
@property (retain, nonatomic) PXHUDVisualization *reframedVisualization;
@property (retain, nonatomic) PXHUDVisualization *resultReframeVisualization;
@property (retain, nonatomic) PXHUDVisualization *resultPerspectiveVisualization;
@property (retain, nonatomic) PXHUDVisualization *resultHorizonVisualization;
@property (copy, nonatomic) NSString *detailText;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)showStatsForPhoto:(id)a0;

@end
