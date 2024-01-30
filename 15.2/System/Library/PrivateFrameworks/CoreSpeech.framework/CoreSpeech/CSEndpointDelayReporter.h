@class NSString, NSUUID;

@interface CSEndpointDelayReporter : NSObject

@property (nonatomic) double endpointTimeInMs;
@property (nonatomic) double userSpeakingStartedTimeInMs;
@property (nonatomic) double userSpeakingEndedTimeInMs;
@property (nonatomic) unsigned long long endpointBufferHostTime;
@property (nonatomic) unsigned long long userSpeakingStartedHostTime;
@property (nonatomic) unsigned long long userSpeakingEndedHostTime;
@property (nonatomic) unsigned long long stopRecordingHostTime;
@property (retain, nonatomic) NSString *requestMHUUID;
@property (retain, nonatomic) NSUUID *turnIdentifier;
@property (nonatomic) BOOL didReportEndpointDelay;

- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)estimatedUserSpeakingStartedHostTime;
- (unsigned long long)estimatedUserSpeakingEndedHostTime;
- (void)_reportUEIUserSpeakingContext;
- (id)initWithRequestMHUUID:(id)a0 turnIdentifier:(id)a1;
- (void)setSpeechRecognizedContext:(id)a0 withEndpointerMetrics:(id)a1;
- (void)reportEndpointDelayIfNeed;

@end
