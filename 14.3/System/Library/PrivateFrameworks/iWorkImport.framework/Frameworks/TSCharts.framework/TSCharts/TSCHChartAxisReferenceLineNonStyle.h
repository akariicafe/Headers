@class NSArray, TSCHChartAxisID;

@interface TSCHChartAxisReferenceLineNonStyle : NSObject

@property (copy, nonatomic) TSCHChartAxisID *axisIdentifier;
@property (copy, nonatomic) NSArray *referenceLineNonStyleItems;

- (void).cxx_destruct;
- (void)didInitFromSOS;

@end
