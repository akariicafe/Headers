@class TSCHChartModel, TSCHChartAxis, TSCHChartInfo, TSCHChartAxisID, TSCHChartAxisLayoutItem;

@interface TSCHAxisLabelTransformInfo : NSObject

@property (weak, nonatomic) TSCHChartAxisLayoutItem *axisLayoutItem;
@property (weak, nonatomic) TSCHChartModel *chartModel;
@property (weak, nonatomic) TSCHChartInfo *chartInfo;
@property (weak, nonatomic) TSCHChartAxisID *axisID;
@property (weak, nonatomic) TSCHChartAxis *axis;
@property (nonatomic) BOOL useAngle;
@property (nonatomic) int position;
@property (nonatomic) struct CGSize { double width; double height; } maxLabelSizeInPoints;
@property (nonatomic) double labelRotationInDegrees;
@property (nonatomic) double strokeThickness;
@property (nonatomic) double labelExplosion;
@property (nonatomic) struct CGSize { double width; double height; } labelLayoutSize;
@property (nonatomic) double radarStartAngleInDegrees;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) double xSemiaxis;
@property (nonatomic) double ySemiaxis;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } unitCircleToEllipseTransform;
@property (nonatomic) unsigned long long labelIndex;
@property (nonatomic) double unitSpaceAnchor;
@property (nonatomic) struct CGSize { double width; double height; } labelSizeInPoints;

- (void).cxx_destruct;

@end
