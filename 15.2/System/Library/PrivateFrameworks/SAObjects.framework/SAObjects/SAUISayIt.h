@class NSString, SAUIAudioData, NSNumber, SAUIListenAfterSpeakingBehavior;
@protocol SAAceSerializable;

@interface SAUISayIt : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAudioData *audioData;
@property (copy, nonatomic) NSString *audioDataUrl;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) id<SAAceSerializable> context;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL repeatable;

+ (id)sayIt;
+ (id)sayItWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
