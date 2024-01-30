@class NSDate;

@interface GEORouteHypothesizerAnalyticsStore : NSObject <NSSecureCoding> {
    double _observedEarlyDeltaFromRequiredTimeToLeave;
    double _observedLateDeltaFromRequiredTimeToLeave;
    unsigned long long _hypothesizerRerouteCount;
    unsigned long long _hypothesisCount;
    BOOL _stopped;
    unsigned long long _uiNotificationType;
    NSDate *_lastGenerationDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long etaUpdatesAfterEventStart;
@property (nonatomic) BOOL etaUpdatesWereReported;

- (id)init;
- (void).cxx_destruct;
- (void)didShowUI:(unsigned long long)a0;
- (void)didStopHypothesizing;
- (void)dealloc;
- (void)didArriveWithExpectedArrivalTime:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didReroute;
- (void)didGenerateHypothesis;
- (void)didStopMoving;
- (void)didStartMovingWithExpectedDepartureTime:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
