@class NSMutableArray;

@interface AVAssetSegmentReport : NSObject

@property (readonly, nonatomic) long long segmentType;
@property (readonly, nonatomic) NSMutableArray *trackReports;

- (void)dealloc;
- (id)initWithFigSegmentReportDictionary:(id)a0;

@end
