@class NSArray, TSCHChartAxisID;

@interface TSCHChartAxisReferenceLineStyle : NSObject

@property (copy, nonatomic) TSCHChartAxisID *axisIdentifier;
@property (copy, nonatomic) NSArray *referenceLineStyles;

- (void).cxx_destruct;
- (void)didInitFromSOS;

@end
