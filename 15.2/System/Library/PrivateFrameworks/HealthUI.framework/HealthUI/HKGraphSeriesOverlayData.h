@class HKGraphSeries, HKGraphSeriesBlockCoordinateList;

@interface HKGraphSeriesOverlayData : NSObject

@property (readonly, nonatomic) HKGraphSeries *graphSeries;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } graphSeriesScreenRect;
@property (readonly, nonatomic) HKGraphSeriesBlockCoordinateList *graphSeriesCoordinates;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } graphSeriesPointTransform;

- (void).cxx_destruct;
- (id)initWithGraphSeries:(id)a0 graphSeriesScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 graphSeriesCoordinates:(id)a2 graphSeriesPointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;

@end
