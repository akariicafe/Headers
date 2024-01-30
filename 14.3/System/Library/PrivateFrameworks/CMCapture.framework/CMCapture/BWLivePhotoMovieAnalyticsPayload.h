@class NSString;

@interface BWLivePhotoMovieAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int clientIDType;
@property (nonatomic) BOOL recordingSucceeded;
@property (nonatomic) int errorStatus;
@property (nonatomic) int sessionStatus;
@property (nonatomic) BOOL longPressMovie;
@property (nonatomic) BOOL originalRecording;
@property (nonatomic) BOOL hasStillImagePTS;
@property (nonatomic) double movieDurationInSeconds;
@property (nonatomic) double stillTimeOffsetInSeconds;
@property (nonatomic) double stillTimeOffsetToVideoPrerollStartInMilliseconds;
@property (nonatomic) double stillTimeOffsetToVideoPrerollStopInMilliseconds;
@property (nonatomic) double stillTimeOffsetToAudioPrerollStartInMilliseconds;
@property (nonatomic) double stillTimeOffsetToAudioPrerollStopInMilliseconds;
@property (nonatomic) BOOL overlappingCapture;
@property (nonatomic) long long stagingNodeOverallNumberOfVideoFramesReceived;
@property (nonatomic) double stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) long long stagingNodeValveActiveNumberOfVideoFramesReceived;
@property (nonatomic) double stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) long long fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName;
- (id)init;
- (void)reset;
- (void)dealloc;
- (id)eventDictionary;

@end
