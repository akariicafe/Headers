@class UIColor, NSString;

@interface StockChartDisplayMode : NSObject <NSCopying> {
    NSString *_hash;
}

@property (nonatomic) struct CGSize { double width; double height; } chartSize;
@property (nonatomic) BOOL showsVolume;
@property (nonatomic) long long maxInterval;
@property (nonatomic) BOOL HUDEnabled;
@property (nonatomic) double showsTitle;
@property (nonatomic) unsigned long long yAxisLabelCount;
@property (nonatomic) unsigned long long horizontalGridlineCount;
@property (nonatomic) BOOL showsPriceLabelForPreviousClose;
@property (nonatomic) BOOL usesDetailedAxisLabels;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } lineGraphInsets;
@property (nonatomic) BOOL graphOverlapsYAxisLabels;
@property (nonatomic) double volumeHeight;
@property (nonatomic) double intervalRowHeight;
@property (readonly, nonatomic) double gutterHeight;
@property (readonly, nonatomic) double lineGraphBottomPadding;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) UIColor *backgroundLinesColor;
@property (retain, nonatomic) UIColor *xAxisKeylineColor;
@property (retain, nonatomic) UIColor *axisLabelsColor;
@property (nonatomic) struct CGGradient { } *backgroundGradient;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } chartRenderingInsets;

+ (id)defaultDisplayMode;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
