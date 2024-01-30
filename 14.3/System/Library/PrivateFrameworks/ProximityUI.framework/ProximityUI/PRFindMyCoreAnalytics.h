@class NSUUID, NSString, PRPose, NSURLSession, AKAppleIDSession, PRTargetEstimate, CARunData, CASessionData, NSDictionary, NSNumber, NSObject;
@protocol OS_os_log;

@interface PRFindMyCoreAnalytics : NSObject {
    NSObject<OS_os_log> *_logger;
}

@property (retain, nonatomic) NSUUID *sessionId;
@property (retain, nonatomic) NSUUID *runId;
@property (nonatomic) long long eventNumber;
@property (nonatomic) double startTime;
@property (retain, nonatomic) PRPose *previousPose;
@property (retain, nonatomic) PRTargetEstimate *latestTarget;
@property (retain, nonatomic) NSNumber *rangeEstimate;
@property (retain, nonatomic) NSNumber *traveledDistance;
@property (retain, nonatomic) NSNumber *numberOfPoses;
@property (retain, nonatomic) NSNumber *numberOfRanges;
@property (nonatomic) BOOL shouldLogTargetFoundEvent;
@property (nonatomic) BOOL shouldLogMotionEvent;
@property (nonatomic) BOOL shouldLogEnteredArmsReachEvent;
@property (retain, nonatomic) AKAppleIDSession *authSession;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSString *authHeaderValue;
@property (retain, nonatomic) CASessionData *sessionData;
@property (retain, nonatomic) CARunData *runData;
@property (retain) NSDictionary *customData;

+ (BOOL)isInternalBuild;

- (BOOL)isRunning;
- (id)init;
- (void).cxx_destruct;
- (void)resetState;
- (void)stop;
- (void)deinit;
- (void)start;
- (void)configureSession;
- (void)targetComputed:(id)a0;
- (void)targetRevoked;
- (void)revokeRangeEstimate;
- (void)targetMovingStateChanged:(BOOL)a0;
- (void)updateTravelDistanceWithPose:(id)a0;
- (void)invalidPoseDetected;
- (void)updateWithRangeEstimate:(id)a0;
- (void)configureComplete;
- (void)rangingFailedWithError:(id)a0;
- (void)sendLiveOnAnalytics:(id)a0;
- (id)eventDictionaryWithEvent:(id)a0;
- (void)sendAnalyticsEvent:(id)a0;
- (void)addLatestTarget:(id)a0;

@end
