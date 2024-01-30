@class NSURL, SARemoteDevice;

@interface SAPhonePlayVoiceMail : SADomainCommand

@property (retain, nonatomic) SARemoteDevice *targetDevice;
@property (copy, nonatomic) NSURL *voiceMailId;

+ (id)playVoiceMail;
+ (id)playVoiceMailWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
