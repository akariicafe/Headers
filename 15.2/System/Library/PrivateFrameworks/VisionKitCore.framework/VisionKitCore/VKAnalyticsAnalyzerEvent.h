@class VKAnalysisExecutionDurations, NSError;

@interface VKAnalyticsAnalyzerEvent : VKAnalyticsEvent

@property (retain, nonatomic) VKAnalysisExecutionDurations *durations;
@property (nonatomic) unsigned long long analysisTypes;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) long long textLength;
@property (nonatomic) long long lineCount;
@property (nonatomic) long long ddCount;
@property (nonatomic) long long mrcCount;
@property (nonatomic) long long visualSearchCount;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) double madRoundTripAnalysisDuration;
@property (readonly, nonatomic) double madDocumentDuration;
@property (readonly, nonatomic) double madMRCDuration;
@property (readonly, nonatomic) double madVisualSearchDuration;
@property (readonly, nonatomic) double mrcParseDuration;

- (id)description;
- (void).cxx_destruct;
- (long long)type;
- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (id)initWithExecutionDurations:(id)a0 request:(id)a1 analysis:(id)a2 customIdentifier:(id)a3 error:(id)a4;

@end
