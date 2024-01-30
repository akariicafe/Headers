@class CinematicFramingSessionFramingParameters;

@interface CinematicFramingSessionOptions : NSObject

@property (retain, nonatomic) CinematicFramingSessionFramingParameters *singlePersonFramingParameters;
@property (retain, nonatomic) CinematicFramingSessionFramingParameters *multiPersonFramingParameters;
@property (nonatomic) float horizontalSpeedMultiplier;
@property (nonatomic) float horizontalAccelerationMultiplier;
@property (nonatomic) float verticalSpeedMultiplier;
@property (nonatomic) float verticalAccelerationMultiplier;
@property (nonatomic) float zoomInSpeedMultiplier;
@property (nonatomic) float zoomOutSpeedMultiplier;
@property (nonatomic) float zoomAccelerationMultiplier;
@property (nonatomic) BOOL shouldDisableTransitions;
@property (nonatomic) BOOL shouldVisualizeCrop;
@property (nonatomic) BOOL shouldVisualizeDetections;
@property (nonatomic) BOOL shouldVisualizeDeadband;
@property (nonatomic) long long framingStyle;
@property (nonatomic) float movementThresholdMetersPerSecond;
@property (nonatomic) float considerStationaryAfterThresholdSeconds;
@property (nonatomic) float zoomEaseInCurveA;
@property (nonatomic) float zoomEaseInCurveB;
@property (nonatomic) float xEaseInCurveA;
@property (nonatomic) float xEaseInCurveB;
@property (nonatomic) float yEaseInCurveA;
@property (nonatomic) float yEaseInCurveB;
@property (nonatomic) float minCropFovRad;
@property (nonatomic) float deadbandRecenteringInitialDelaySec;
@property (nonatomic) float deadbandRecenteringDurationSec;
@property (nonatomic) float deadbandRecenteringIdleDurationSec;
@property (nonatomic) float noPeopleDelayBeforeReturningHomeSec;
@property (nonatomic) float noPeopleReturningHomeDurationSec;
@property (nonatomic) float tinyHeadMinValue;
@property (nonatomic) float tinyHeadMaxValue;
@property (nonatomic) float subjectMovementTolerance;
@property (nonatomic) BOOL recenterAfterDriftEnabled;
@property (nonatomic) float recenterAfterDriftDurationThreshold;
@property (nonatomic) float recenterAfterDriftOffsetThreshold;
@property (nonatomic) float viewportScaleMultiplierPortrait;
@property (nonatomic) float viewportScaleMultiplierLandscape;

- (id)asPlist;
- (id)initWithPlist:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlistPath:(id)a0;

@end
