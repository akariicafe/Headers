@class NSString;

@interface SANPVideoSetDefaultAudioTrack : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;

+ (id)setDefaultAudioTrack;
+ (id)setDefaultAudioTrackWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
