@class NSString, NSDictionary;

@interface BWMovieFileOutputAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int activeDeviceMask;
@property (nonatomic) int devicePosition;
@property (nonatomic) int videoOrientation;
@property (nonatomic) BOOL videoMirrored;
@property (nonatomic) int deviceType;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) double duration;
@property (nonatomic) double durationFront;
@property (nonatomic) double durationFrontSuperWide;
@property (nonatomic) double durationRearWide;
@property (nonatomic) double durationRearTele;
@property (nonatomic) double durationRearSuperWide;
@property (nonatomic) float nominalFramerate;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (nonatomic) float startingUIZoom;
@property (nonatomic) float minUIZoomDuringVideoRecording;
@property (nonatomic) float maxUIZoomDuringVideoRecording;
@property (nonatomic) float averageSystemPressureLevel;
@property (nonatomic) int maxSystemPressureLevel;
@property (nonatomic) long long timeToCriticalSystemPressureInMS;
@property (nonatomic) unsigned int systemPressureFactors;
@property (nonatomic) struct BWCoreAnalyticsMovieRecordingSphereAFStatistics { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; } *sphereAFStatistics;
@property (retain, nonatomic) NSDictionary *cameraSwitchStatistics;
@property (retain, nonatomic) NSDictionary *sphereModeByPortType;
@property (retain, nonatomic) NSDictionary *APSModeByPortType;
@property (retain, nonatomic) NSDictionary *variableFrameRateStatistics;
@property (nonatomic) BOOL afDriverShortOccurred;
@property (nonatomic) unsigned long long totalNumberOfFramesDropped;
@property (nonatomic) unsigned long long numberOfFramesDroppedDueToFormatWriterQueueFull;
@property (nonatomic) BOOL hdrVideo;
@property (nonatomic) BOOL proresVideo;
@property (nonatomic) unsigned long long numberOfISPFramesDropped;
@property (nonatomic) unsigned long long numberOfISPFrames;
@property (nonatomic) struct BWCoreAnalyticsMovieRecordingVideoSTFStatistics { BOOL x0; id x1; float x2; float x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } *videoSTFStatistics;
@property (nonatomic) BOOL cinematicVideoEnabled;
@property (nonatomic) struct BWCoreAnalyticsMovieRecordingCinematicVideoStatistics { unsigned int countOfSoftFocusRequests; unsigned int countOfHardFocusRequests; unsigned int countOfFixedPlaneFocusRequests; unsigned int countOfTapToTrackFailures; unsigned int countOfFixedTaxonomyFocusDecisions; unsigned int countOfNonTaxonomyFocusDecisions; unsigned int countOfCustomFocusDecisions; unsigned int countOfAutoFocusDecisions; } cinematicVideoMovieRecordingStats;
@property (retain, nonatomic) NSString *videoCodec;
@property (nonatomic) long long movieFileSize;
@property (nonatomic) float percentageOfAvailableDataStorageAfterWritingMovie;
@property (nonatomic) long long totalNANDReadBytesDuringRecording;
@property (nonatomic) long long totalNANDWriteBytesDuringRecording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName;
- (id)eventDictionary;
- (void)dealloc;
- (id)init;
- (void)reset;

@end
