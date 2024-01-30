@class NSString, NSNumber;

@interface HKAccessibilitySpan : NSObject

@property (readonly, nonatomic) NSString *dataSeriesTitle;
@property (readonly, nonatomic) long long dataSeriesType;
@property (readonly, nonatomic) NSNumber *dataComprehensionMinYValue;
@property (readonly, nonatomic) NSNumber *dataComprehensionMaxYValue;
@property (readonly, nonatomic) NSString *dataComprehensionUnitForChart;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)a0 seriesType:(long long)a1 dataComprehensionMinYValue:(id)a2 dataComprehensionMaxYValue:(id)a3 dataComprehensionUnitForChart:(id)a4;

@end
