@class PLDisplayAZLStats, PLDisplayAPLStats;

@interface PLDisplayIOReportStats : PLIOReportStats

@property (retain) PLDisplayAPLStats *displayAPLStats;
@property (retain) PLDisplayAZLStats *displayAZLStats;

- (void).cxx_destruct;
- (id)init;

@end
