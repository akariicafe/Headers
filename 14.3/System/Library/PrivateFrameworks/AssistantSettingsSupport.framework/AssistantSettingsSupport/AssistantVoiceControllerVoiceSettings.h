@class AFVoiceInfo;

@interface AssistantVoiceControllerVoiceSettings : NSObject

@property (retain, nonatomic) AFVoiceInfo *inProgressVoice;
@property (retain, nonatomic) AFVoiceInfo *currentVoice;

+ (id)settingsWithInProgressVoice:(id)a0 currentVoice:(id)a1;

- (void).cxx_destruct;

@end
