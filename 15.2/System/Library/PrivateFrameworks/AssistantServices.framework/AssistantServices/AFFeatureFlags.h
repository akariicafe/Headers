@interface AFFeatureFlags : NSObject

+ (id)sharedInstance;
+ (void)dump;
+ (id)featureFlags;
+ (BOOL)isRemoraEnabled;
+ (BOOL)isListeningOnBothStereoPairUnitsEnabled;
+ (BOOL)isHomeAutomationBackgroundRequestEnabled;
+ (BOOL)isAnnounceMessagesInCarPlayEnabled;
+ (BOOL)isAnnounceTelephonyEnabled;
+ (BOOL)isCrossDeviceVoiceFollowUpEnabled;
+ (BOOL)isAnnounceGroupFaceTimeInviteEnabled;
+ (BOOL)isAudioSessionCoordinationEnabled;
+ (BOOL)isLocationSearchContinuityEnabled;
+ (BOOL)isCrossDeviceTVControlEnabled;
+ (BOOL)isSiriXEnabled;
+ (BOOL)isDictationVoiceTriggerEnabled;
+ (BOOL)isSiriUODAvailableForLanguage:(id)a0;
+ (BOOL)isTrialDictationAssetDeliveryEnabled;
+ (BOOL)isAnnounceEnabled;
+ (BOOL)isMyriadNonSpeakerRawScoreThresholdEnabled;
+ (BOOL)isThemisABEnabled;
+ (BOOL)isTimerAlarmCoordinationEnabled;
+ (void)setLocationSearchContinuityEnabled:(BOOL)a0;
+ (BOOL)isSiriRequestDispatcherEnabled;
+ (BOOL)isAnnounceNotificationsEnabled;
+ (BOOL)isHintsEnabled;
+ (BOOL)isLassoEnabled;

@end
