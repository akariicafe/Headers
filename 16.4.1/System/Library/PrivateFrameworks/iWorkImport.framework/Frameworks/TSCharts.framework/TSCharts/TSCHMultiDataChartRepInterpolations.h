@class CAMediaTimingFunction;

@interface TSCHMultiDataChartRepInterpolations : NSObject

@property (readonly, nonatomic) CAMediaTimingFunction *overall;
@property (readonly, nonatomic) CAMediaTimingFunction *individual;

+ (id)interpolationsWithOverallTimingFunction:(id)a0 individualTimingFunction:(id)a1;

- (void).cxx_destruct;
- (id)initWithOverallTimingFunction:(id)a0 individualTimingFunction:(id)a1;

@end
