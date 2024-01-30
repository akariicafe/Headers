@class UIColor, NSArray, NSDictionary, NSMutableArray;

@interface FIUIChartFloatingBarSeries : FIUIChartSeries {
    NSArray *_barRects;
    NSMutableArray *_barLabelTopPoints;
    NSMutableArray *_barLabelBottomPoints;
    NSMutableArray *_barLabels;
}

@property (retain, nonatomic) UIColor *barColor;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSDictionary *labelAttributes;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)_loadFromDataSet;

@end
