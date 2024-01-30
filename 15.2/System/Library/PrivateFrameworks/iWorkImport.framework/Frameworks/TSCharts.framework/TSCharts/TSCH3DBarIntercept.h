@class TSCHChartAxis;

@interface TSCH3DBarIntercept : NSObject

@property (readonly, nonatomic) double value;
@property (readonly, retain, nonatomic) TSCHChartAxis *valueAxis;

+ (id)interceptWithValueAxis:(id)a0 value:(double)a1;

- (void).cxx_destruct;
- (id)initWithValueAxis:(id)a0 value:(double)a1;

@end
