@class NSArray, NSDictionary, NSMutableArray;

@interface HKPopulationNormsAxisView : UIView

@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSArray *axisLabelValues;
@property (retain, nonatomic) NSDictionary *axisLabelAttributes;
@property (retain, nonatomic) NSMutableArray *axisLabelViews;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithOrientation:(long long)a0 axisLabels:(id)a1;
- (double)minorDimensionSize;

@end
