@class NSMutableDictionary, NSDate;

@interface WFScanMetricsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sectionCounts;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) BOOL submited;

- (void)submit;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)ingestScanResults:(id)a0;
- (id)sectionNameForRecord:(id)a0;

@end
