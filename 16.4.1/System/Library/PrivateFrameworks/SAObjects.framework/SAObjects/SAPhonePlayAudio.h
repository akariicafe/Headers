@class NSString;

@interface SAPhonePlayAudio : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *phoneAudioType;

+ (id)playAudio;
+ (id)playAudioWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
