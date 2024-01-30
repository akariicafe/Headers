@class BMMediaUsageStream, BMPOICategoryStream, BMHomeKitClientActionSetStream, BMReadMessageStream, BMSchoolTimeStream, BMSiriIntentEventsStream, BMSoundDetectionStream, BMDiscoverabilitySignalStream, BMGameControllerStream, BMSiriExecutionStream, BMIntentStream, BMUserStatusChangeStream, BMPostSiriEngagementStream, BMNowPlayingStream, BMGroupActivitySessionStream, BMDoNotDisturbWhileDrivingStream, BMCoreDuetStream, BMUserFocusComputedModeStream, BMWorkoutStream, BMBacklightStream, BMAskToBuyStream, BMSemanticLocationStream, BMFindMyLocationChangeStream, BMUserFocusActivityStream, BMScreenTimeRequestStream, BMSiriUIStream, BMWebUsageStream, BMAppLaunchStream, BMMindfulnessSessionStream, BMNotificationStream, BMSleepModeStream, BMDeviceMetadataStream, BMHomeKitClientMediaAccessoryControlStream, BMCarPlayStream, BMAppClipLaunchStream, BMHealthKitWorkoutStream, BMHomeKitClientAccessoryControlStream, BMScreenRecordingStream, BMTextInputSessionStream, BMContextualActionsStream, BMAlarmStream, BMScreenSharingStream;

@interface BMStreams : NSObject

@property (class, readonly) BMSleepModeStream *sleepModeStream;
@property (class, readonly) BMDiscoverabilitySignalStream *discoverabilitySignal;
@property (class, readonly) BMCoreDuetStream *coreDuetStream;
@property (class, readonly) BMCoreDuetStream *coreDuetSystemStream;
@property (class, readonly) BMAppLaunchStream *appLaunch;
@property (class, readonly) BMAppClipLaunchStream *appClipLaunch;
@property (class, readonly) BMUserFocusComputedModeStream *userFocusComputedMode;
@property (class, readonly) BMUserFocusActivityStream *userFocusActivity;
@property (class, readonly) BMMediaUsageStream *mediaUsage;
@property (class, readonly) BMIntentStream *intent;
@property (class, readonly) BMPOICategoryStream *poiCategory;
@property (class, readonly) BMContextualActionsStream *contextualActions;
@property (class, readonly) BMCarPlayStream *carPlayStream;
@property (class, readonly) BMDoNotDisturbWhileDrivingStream *doNotDisturbWhileDrivingStream;
@property (class, readonly) BMHomeKitClientAccessoryControlStream *homeKitClientAccessoryControlStream;
@property (class, readonly) BMHomeKitClientMediaAccessoryControlStream *homeKitClientMediaAccessoryControlStream;
@property (class, readonly) BMHomeKitClientActionSetStream *homeKitClientActionSetStream;
@property (class, readonly) BMAlarmStream *alarmStream;
@property (class, readonly) BMScreenRecordingStream *screenRecordingStream;
@property (class, readonly) BMScreenSharingStream *screenSharingStream;
@property (class, readonly) BMNowPlayingStream *nowPlayingStream;
@property (class, readonly) BMNotificationStream *notificationStream;
@property (class, readonly) BMWorkoutStream *workoutStream;
@property (class, readonly) BMGroupActivitySessionStream *groupActivitySessionStream;
@property (class, readonly) BMWebUsageStream *webUsageStream;
@property (class, readonly) BMSemanticLocationStream *semanticLocationStream;
@property (class, readonly) BMBacklightStream *backlightStream;
@property (class, readonly) BMHealthKitWorkoutStream *healthKitWorkoutStream;
@property (class, readonly) BMAskToBuyStream *askToBuyStream;
@property (class, readonly) BMReadMessageStream *readMessageStream;
@property (class, readonly) BMFindMyLocationChangeStream *findMyLocationChangeStream;
@property (class, readonly) BMSoundDetectionStream *soundDetection;
@property (class, readonly) BMUserStatusChangeStream *userStatusChangeStream;
@property (class, readonly) BMTextInputSessionStream *textInputSessionStream;
@property (class, readonly) BMDeviceMetadataStream *deviceMetadataStream;
@property (class, readonly) BMSchoolTimeStream *schoolTimeStream;
@property (class, readonly) BMMindfulnessSessionStream *mindfulnessStream;
@property (class, readonly) BMScreenTimeRequestStream *screenTimeRequestStream;
@property (class, readonly) BMSiriIntentEventsStream *siriIntentEventsStream;
@property (class, readonly) BMGameControllerStream *gameControllerStream;
@property (class, readonly) BMSiriUIStream *siriUIStream;
@property (class, readonly) BMSiriExecutionStream *siriExecutionStream;
@property (class, readonly) BMPostSiriEngagementStream *postSiriEngagementStream;

@end
