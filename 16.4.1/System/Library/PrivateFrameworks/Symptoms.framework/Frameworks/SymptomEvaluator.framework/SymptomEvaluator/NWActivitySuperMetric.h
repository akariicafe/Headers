@class NSMutableArray, NSDictionary, NWActivityStatistics, NWActivityEpilogueStatistics;

@interface NWActivitySuperMetric : NSObject

@property (retain, nonatomic) NWActivityStatistics *activity;
@property (retain, nonatomic) NWActivityEpilogueStatistics *activityEpilogue;
@property (retain, nonatomic) NSMutableArray *connectionReports;
@property (retain, nonatomic) NSMutableArray *taskMetrics;
@property (retain, nonatomic) NSMutableArray *wifiFragments;
@property (retain, nonatomic) NSMutableArray *cellularFragments;
@property (retain, nonatomic) NSMutableArray *clientFragments;
@property (readonly) NSDictionary *dictionaryRepresentation;

+ (void)flattenObject:(id)a0 intoDictionary:(id)a1 atPath:(id)a2;
+ (unsigned int)limitForFragmentType:(int)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
