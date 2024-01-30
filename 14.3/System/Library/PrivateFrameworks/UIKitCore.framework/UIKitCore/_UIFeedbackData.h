@class NSURL, _UIFeedbackParameters, NSString;

@interface _UIFeedbackData : NSObject <_UIFeedbackData>

@property (nonatomic, setter=_setEffectiveEventType:) unsigned long long effectiveEventType;
@property (nonatomic, setter=_setEffectiveDuration:) double effectiveDuration;
@property (nonatomic, setter=_setEffectiveDelay:) double effectiveDelay;
@property (retain, nonatomic, setter=_setHapticParameters:) _UIFeedbackParameters *hapticParameters;
@property (retain, nonatomic, setter=_setAudioParameters:) _UIFeedbackParameters *audioParameters;
@property (nonatomic, setter=_setEffectiveEnabledFeedbackTypes:) unsigned long long effectiveEnabledFeedbackTypes;
@property (nonatomic, setter=_setEffectiveSystemSoundID:) unsigned int effectiveSystemSoundID;
@property (retain, nonatomic, setter=_setFileURL:) NSURL *fileURL;
@property (nonatomic, setter=_setFileFeedbackType:) unsigned long long fileFeedbackType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
