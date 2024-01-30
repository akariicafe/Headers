@class NSString;

@interface SKIDirectInvocationContext : NSObject

@property (nonatomic, getter=isVoiceTriggerEnabled) BOOL voiceTriggerEnabled;
@property (nonatomic, getter=isTextToSpeechEnabled) BOOL textToSpeechEnabled;
@property (nonatomic, getter=isEyesFree) BOOL eyesFree;
@property (copy, nonatomic) NSString *inputOrigin;
@property (copy, nonatomic) NSString *interactionType;

+ (id)contextForCarPlayDirectAction;
+ (id)contextForAnnounceNotifications;

- (void).cxx_destruct;
- (id)init;

@end
