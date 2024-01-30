@class NSString, AVAssetSegmentReportSampleInformation;

@interface AVAssetSegmentTrackReport : NSObject

@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } earliestPresentationTimeStamp;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) AVAssetSegmentReportSampleInformation *firstVideoSampleInformation;

- (void)dealloc;
- (id)initWithFigSegmentTrackReportDictionary:(id)a0;

@end
