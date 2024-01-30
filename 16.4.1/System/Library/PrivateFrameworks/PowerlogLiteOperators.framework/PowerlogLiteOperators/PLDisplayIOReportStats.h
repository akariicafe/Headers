@class PLDisplayAZLStats, PLDisplayAPLStats;

@interface PLDisplayIOReportStats : PLIOReportStats

@property (retain) PLDisplayAPLStats *displayAPLStats;
@property (retain) PLDisplayAZLStats *displayAZLStats;

- (id)init;
- (void).cxx_destruct;

@end
