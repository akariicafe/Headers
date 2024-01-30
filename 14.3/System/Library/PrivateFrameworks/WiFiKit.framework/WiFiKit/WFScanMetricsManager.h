@class NSMutableDictionary, NSDate;

@interface WFScanMetricsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sectionCounts;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) BOOL submited;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)submit;
- (void)ingestScanResults:(id)a0;
- (id)sectionNameForRecord:(id)a0;

@end
