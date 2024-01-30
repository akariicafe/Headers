@class PLCFNotificationOperatorComposition;

@interface PLAccessibilityAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *notificationReduceMotionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationBackgroundContrastChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationVoiceControlChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationBackTapChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSpeakSelectionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSpeakScreenChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSoundRecognitionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSystemCaptioningChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationFacetimeCaptioningChanged;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardNameVoiceControl;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardNameSoundRecognition;
+ (id)entryEventForwardNameHandGestures;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardNameReduceMotion;
+ (id)entryEventForwardNameSpeakScreen;
+ (id)entryEventForwardNameBackgroundContrast;
+ (id)entryEventForwardNameAssistiveTouch;
+ (id)entryEventForwardNameFacetimeCaptioning;
+ (id)entryEventForwardNameSpeakSelection;
+ (id)entryEventForwardNameBackTap;
+ (id)entryEventForwardNameSystemCaptioning;

- (void)initOperatorDependancies;
- (void)logEventForwardBackTap;
- (void)logEventForwardSpeakSelection;
- (void)log;
- (void)logEventForwardSpeakScreen;
- (void)logEventForwardBackgroundContrast;
- (void)logEventForwardVoiceControl;
- (void)initTaskOperatorDependancies;
- (id)init;
- (void)logEventForwardSystemCaptioning;
- (void)logEventForwardSoundRecognition;
- (void)logEventForwardFacetimeCaptioning;
- (void)logEventForwardReduceMotion;
- (void).cxx_destruct;

@end
